#include <iostream>
#include <stdlib.h>
using namespace std;

int n = 10, p0 = 5, d = 2;
double a(int n)
{
    if (n == 0)
        return p0;
    else
        return a(n - 1) * p0 * d;
}
int main()
{
    cout << "P(" << n << ")=" << a(n);
    return 0;
}