#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   // int count = 0;
    for (int i = 0; i < n; i++)
        /*if (arr[i] < 0)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }*/
    if (arr[i] > 0)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
