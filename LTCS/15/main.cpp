#include <iostream>
using namespace std;

bool checkNT(int n)
{
    if (n < 0)
    return 0;
    if (n % 2 == 0)
    {
        return false;
    }
    return true;
}
int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (checkNT(arr[i]) && arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}
