//e. Tìm ước số chung lớn nhất của 2 số nguyên A và B
#include <iostream>
using namespace std;

int UCLN(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else if (a % b == 0)
    {
        return b;
    }
    return UCLN(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << UCLN(a, b);
}