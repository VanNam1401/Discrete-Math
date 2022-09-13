#include <iostream>
using namespace std;

float SumOf_n(int n, float sum)
{
    if (n == 1)
    {
        return (float)1/2;
    }
    else
    {
        return sum + SumOf_n(--n, sum);
    }
}
int main()
{
    int n; cin >> n;
    float sum = (float) 1/(n * (n + 1));
    cout << SumOf_n(n, sum);
}