#include <iostream>
// #include <conio.h>
// #include <stdio.h>
// #include <time.h>
using namespace std;
int X[10], D[10], CX[20], CN[20], r, n, ch, dem = 0;
void Xuat(int A[], int n)
{
    cout << "\n";
    for (int k = 1; k <= n; k++)
    {
        cout << A[k] << " ";
    }
}
// ham khoi tao cac mang danh dau.
void Khoi_tao()
{
    for (int i = 1; i <= n; i++)
    {
        D[i] = 0;
    }
    for (int j = 1; j <= 2 * n; j++) // điều kiện j <= 2*n vì số lượng đường chéo lớn gấp đôi kích thước n
    {
        CX[j] = 0; // mảng đánh dấu chứa các đường chéo xuôi của mảng 2 chiều
    }
    for (int k = 1; k <= 2 * n; k++)
    {
        CN[k] = 0; // mảng đánh dấu chứa các đường chéo ngược của mảng 2 chiều
    }
}

void Dat_hau(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (D[j] == 0 && CX[j + i] == 0 && CN[j - i + n] == 0)
        {
            X[i] = j; // hàng
            D[j] = 1; // cột
            CX[j + i] = 1;
            CN[j - i + n] = 1;
            if (i == n)
            {
                Xuat(X, n);
                dem++;
            }
            else
            {
                Dat_hau(i + 1);
                D[j] = 0;
                CX[j + i] = 0;
                CN[j - i + n] = 0;
            }
        }
    }
}
int main()
{
    cout << "Nhap kich thuoc: ";
    cin >> n;
    Khoi_tao();
    for (int i = 0; i < n; i++)
    {
        cout << D[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << CX[i] << " ";
    }
   // Dat_hau(1);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << CN[i] << " ";
    }
    //cout << dem;
}
