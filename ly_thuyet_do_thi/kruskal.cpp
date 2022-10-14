#include <iostream>
#include <fstream>
#define max 10
using namespace std;
struct Canh
{
    int d, c, t;
};
int n, e, s, mT, KC[max], ET[max], index[max], KeT[max] = {0}, A[max][max] = {(0, 0)};
Canh listCanh[max];
void nhapDoThi()
{
    ifstream dotfile("DOTHI.txt");
    if (dotfile.is_open())
    {
        int d, c, t;
        dotfile >> n >> e;
        cout << "\n so dinh cua do thi: " << n;
        cout << "\n so canh cua do thi:" << e;
        for (int i = 1; i <= e; i++)
        {
            dotfile >> d >> c >> t;
            listCanh[i].d = d;
            listCanh[i].c = c;
            listCanh[i].t = t;
            A[d][c] = A[c][d] = t;
        }
    }
    else
    {
        cout << "\n chua mo duoc file";
    }
}
void xuatDoThi(int n, int A[][max])
{
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
void khoiTao()
{
    for (int i = 1; i <= n; i++)
    {
        index[i] = i;
    }
    for (int i = 1; i <= e; i++)
    {
        ET[i] = 1;
    }
}
void sort(int e, Canh listCanh[max])
{
    for (int i = 1; i < e; i++)
    {
        for (int j = i + 1; j <= e; j++)
        {
            if (listCanh[j].t < listCanh[i].t)
            {
                Canh tam = listCanh[i];
                listCanh[i] = listCanh[j];
                listCanh[j] = tam;
            }
        }
    }
}
void tree(int s)
{
    cout << "\n Cay khung cua do thi gom cac canh:";
    for (int i = 1; i <= n; i++)
    {
        if (i != s)
        {
            cout << "\n[" << i << "][" << KeT[i] << "]: " << KC[i];
        }
    }
    cout << "\n tong do dai cay khung la: " << mT;
}
void kruskal(int n, int A[][max])
{
    int eT = 0;
    while (eT < n - 1)
    {
        for (int i = 1; i <= e; i++)
        {
            if (ET[i] && index[listCanh[i].d] != index[listCanh[i].c])
            {
                ET[i] = 0;
                index[listCanh[i].c] = index[listCanh[i].d];
                mT += listCanh[i].t;
                KeT[listCanh[i].c] = listCanh[i].d;
                KC[listCanh[i].c] = listCanh[i].t;
                eT++;
            }
        }
    }
}
int main()
{
    nhapDoThi();
    xuatDoThi(n, A);
    khoiTao();
    sort(e, listCanh);
    cout << "\n canh sx: ";
    for (int i = 1; i <= e; i++)
    {
        cout << listCanh[i].t << " ";
    }
    kruskal(n, A);
    tree(1);
    return 0;
}