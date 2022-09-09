#include <iostream>
#include <cmath>
using namespace std;

float SumOf_n(int n, float sum)
{
    if (n == 1)
    {
        return 1;
    }
    else 
    {
        sum = (float)pow(-1, (n + 1)) / n;
        //cout << sum << endl;
        return sum + SumOf_n(--n, sum);
    }
}
int main()
{
    int n; cin >>n;
    float sum = 0;
    //cout << SumOf_n(n, sum);
    int a = 2, b = 2;
    cout << a-- << " " << -- b;
}