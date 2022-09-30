//
// Created by VanNam on 30/09/2022.
//
#include <iostream>
using namespace std;
int n, X[10], D[10];

void Xuat(int X, int n)
{
    for (int i = 0; i <= n; ++i)
    {
        cout << X[i] << " ";
    }
}
void khoiTao(int n)
{
    for (int i = 0; i <= n; i++)
    {
        D[i] = 0;
    }
}
void hoanVi(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (D[j] == 0)
        {
            X[i] == j;
            D[j] = 1;
            if (i == n)
            {
                Xuat(X, n);
            }
            else
            {
                hoanVi(i + 1);
            }
            D[j] = 0;
        }
    }
}
int main()
{
    cin >> n;
    hoanVi(1);
}