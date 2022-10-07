//
// Created by VanNam on 30/09/2022.
//
#include <iostream>
using namespace std;
int n, X[10], D[10];

void Nhap(int D[], int n)
{
    cout << "Nhap mang: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> D[i];
    }
}

void Xuat(int X[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
}
void khoiTao(int n)
{
    for (int i = 1; i <= n; i++)
    {
        D[i] = 0;
    }
}
// hàm liệt kê các hoán vị của n số nguyên dương đầu tiên.
void hoanVi(int i) // i = vị trí.
{
    for (int j = 1; j <= n; j++)
    {
        if (D[j] == 0)
        {
            X[i] = j;
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
   // Nhap(X, n);
    hoanVi(1);
}