#include <iostream>
#include <math.h>
using namespace std;

double sumMoney(int P, int interest, int n)
{
    //double temp = P * pow((1 + interest), n);
    if (n == 0)
    {
        return P;
    }
    double temp = P*0.07;
    return P + sumMoney(temp, interest, n - 1) * interest;
}
int main()
{
    float interest = 0.7;
    int P = 10000;
    int year = 2;
    // cin >> year;
    cout << sumMoney(P, interest, year);
}