#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iomanip>
using namespace std;
void NhapMT(int a[][10], int &m, int &n)
{
    srand(time(NULL));
    cout << "Nhap so hang, so cot";
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cin >> a[i][j];
            a[i][j] = rand() % 10 + 1;
        }
    }
}
void XuatMT(int a[][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
}
int ktMTdonvi(int a[][10], int m, int n)
{
    if (m != n)
        return 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((a[i][j] != 0) && i != j) || (a[i][j] != 1) && (j == i))
                {
                    return 0;
                }
        }
    }
    return 1;
}
void sxHangMT(int a[][10], int m, int n)
{
    // chuyen mang -> vector
    vector<vector<int>> vA;
    vA.resize(m);
    for (int i = 0; i < m; i++)
    {
        vA.at(i).resize(n);
        for (int j = 0; j < n; j++)
        {
            vA.at(i).at(j) = a[i][j];
        }
    }
    // in vector
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout < setw(5) << vA.at(i).at(j);
        }
        cout << endl;
    }
    // sx theo hang
    for (int i = 0; i < m - 1; ++i)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (vA.at(j).at(0) < vA.at(i).at(0))
                vA.at(j).swap(vA.at(i));
            else if (vA.at(j).at(0) == vA.at(i).at(0))
            {
                int k = 0;
                do
                {
                    k++;
                } while ((vA.at(j).at(k) == vA.at(i).at(k)) && k < n - 1);
                if (vA.at(j).at(k) < vA.at(i).at(k))
                    vA.at(j).swap(vA.at(i));
            }
        }
    }
    cout << "sau sx: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j< n; j++)
        {
            cout << setw(5) << vA.at(i).at(j);
        }
    }
}
int main()
{
    int m, n;
    int a[m][n];
    NhapMT(a, m, n);
}