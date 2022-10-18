#include <iostream>
#include <conio.h>
#include <fstream>
#include <limits.h>
#define max 10
using namespace std;

int n, e, s, f, L[10], T[max], Truoc[max], DT[max][max] = {(0, 0)};
void nhapdothi()
{
    ifstream dotfile("dothi2.txt");
    if (dotfile.is_open())
    {
        int d, c, t;
        dotfile >> n >> e;
        cout << " So dinh cua do thi: " << n;
        cout << "\n So canh cua do thi: " << e;
        cout << endl;
        for (int i = 1; i <= e; i++)
        {
            dotfile >> d >> c >> t;
            DT[d][c] = DT[c][d] = t;
        }
    }
    else
    {
        cout << "Chua mo duoc file";
    }
}
void xuatdothi(int n, int DT[][max])
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << DT[i][j] << " ";
        }
        cout << endl;
    }
}
void duongdi(int s, int f)
{
    if (s == f)
    {
        cout << s;
    }
    else
    {
        duongdi(s, Truoc[f]);
        cout << "--> " << f;
    }
}
void dijkstra2(int s)
{
    int x;
    for (int i = 1; i <= n; i++)
    {
        L[i] = INT_MAX;
        T[i] = 1;
    }
    L[s] = 0;
    for (int f = 1; f <= n; f++)
    {
        if (T[f]) // t tap dinh chua xet cua do thi
        {
            int min = INT_MAX;
            for (int j = 1; j <= n; j++)
            {
                if (T[j] && L[j] < min)
                {
                    min = L[j];
                    x = j; // tim dnh x co kc L[x] den dinh s la nho nhat
                }
            }
            T[x] = 0;
            for (int k = 1; k <= n; k++)
            {
                if (T[k] && DT[x][k] > 0)
                {
                    if (L[k] > (L[x] + DT[x][k]))
                    {
                        L[k] = L[x] + DT[x][k];
                        Truoc[k] = x;
                    }
                }
            }
            duongdi(s, f);
            cout << " voi chieu dai la: " << L[f] << "\n";
        }
    }
}

int main()
{
    nhapdothi();
    xuatdothi(n, DT);
    cout << "Tim duong di ngan nhat tu dinh: ";
    cin >> s;
    dijkstra2(s);
    getch();
    return 0;
}