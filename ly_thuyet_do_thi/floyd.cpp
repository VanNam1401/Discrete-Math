#include <iostream>
#include <conio.h>
#include <fstream>
#include <limits.h>
using namespace std;

int n, e, b[7][7];
void nhapDoThi()
{
    ifstream dotfile("dothi2.txt");
    if (dotfile.is_open())
    {
        int d, c, t;
        dotfile >> n >> e;
        cout << "\n So dinh cua do thi: " << n;
        cout << "\n So canh cua do thi: " << e;
        cout << endl;
        for (int i = 1; i <= e; i++)
        {
            dotfile >> d >> c >> t;
            b[d][c] = b[c][d] = t;
        }
    }
    else
    {
        cout << "Chua mo duoc file";
    }
}
void floyd(int b[][7])
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
}
void output(int b[][7])
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
// void duongdi(int s, int f)
// {
//     if (s == f)
//     {
//         cout << s;
//     }
//     else
//     {
//         duongdi(s, Truoc[f]);
//         cout << "--> " << f;

int main()
{
    nhapDoThi();
    output(b);
    //floyd(b);
    getch();
}