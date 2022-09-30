#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int count = 0;

    int n = 2;
    while (count <= number)
    {
        int temp = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                temp = 0;
            }
        }
        if (temp == 1)
        {
            cout << n << " ";
            count++;
        }
        n++;
    }
    return 0;
}