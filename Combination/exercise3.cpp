#include <iostream>
using namespace std;

void xoa_pt(int arr[], int n, int index)
{
    for (int i = index; i < n + 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}
void mergeArray(int a[], int b[], int n, int m, int h)
{
    int c[h];
    for (int i = 0; i < h; i++)
    {
        if (i < n)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - n];
        }
    }
    for (int i = 0; i < h - 1; i++)
    {
        if (c[i] == c[i + 1])
        {
            xoa_pt(c, h, i + 1);
            i--;
        }  
    }
    for (int i = 0; i < h; i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    int n = 5, m = 5;
    int a[n] = {1,2,3,4,5};
    int b[m] = {5,7,8,9,10};
    int h = n + m;
    mergeArray(a, b, n, m, h);
    return 0;
}