#include <iostream>
#include <algorithm>
using namespace std;

void xoa_ptu(int arr[], int &n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int n = 10;
    int arr[10] = {1, 2, 3, 3, 4, 5, 6, 6, 7, 8};
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
               xoa_ptu(arr, n, j);
                i--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
//                //th1
//            {
//                //arr[j] = arr[n-1];
//            }
//th2:
//            {
//                for (int x = j; x < j + 1; x++)
//                {
//                    arr[x] = arr[x + 1];
//                }
//            }