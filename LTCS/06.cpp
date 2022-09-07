#include <iostream>
#include <cmath>
using namespace std;

bool checkNT(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n; cin >> n;
    if (checkNT(n) == true)
    {
        cout << n << " la so nguyen to";
    }
    else cout << n << " khong phai la so nguyen to";

}
