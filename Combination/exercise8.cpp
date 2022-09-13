#include <iostream>
#include <algorithm>
using namespace std;

void xoa_pt(int arr[], int &n, int index)
{
    for (int i = index; i < n + 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}
int main()
{
    int n = 5;
    int arr[n] = {5, 6, 3, 1, 1};
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            xoa_pt(arr, n, i + 1);
            i--;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    sort(arr, arr + 5);
    cout << arr[0];
}