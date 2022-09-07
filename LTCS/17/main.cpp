#include <iostream>
#include <iomanip>
using namespace std;

bool checkNT(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkNT(arr[i]))
        {
            sum += arr[i];
            count++;
        }
    }

    cout << sum << " " << count << " ";
    cout << (float)(sum % count);
    return 0;
}
