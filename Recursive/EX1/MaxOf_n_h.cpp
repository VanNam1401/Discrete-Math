//Tìm chữ số lớn nhất của số nguyên dương n
#include <iostream>
using namespace std;

int MaxOf(int n, int &max)
{
    if (n == 0)
    {
        return max;
    }
    else
    {
        int temp = n % 10;
        if(temp > max)
        {
            max = temp;
        }
        return MaxOf(n/10, max);
    }
}
int main()
{
    int n, max = 0;
    cin >> n;
    MaxOf(n, max);
    cout << max;
}