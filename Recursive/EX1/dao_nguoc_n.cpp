//Tìm số đảo ngược 1 số nguyên dương.
#include <iostream>
using namespace std;

int daoNguoc(int n, int answer)
{
    int temp;
    if (n == 0)
    {
        return answer;
    }
    else
    {
        temp = n % 10;
        answer = (answer * 10) + temp;
        daoNguoc(n / 10, answer);
    }
}

int main()
{
    int n;
    cin >> n;
    int answer = 0;
    cout << daoNguoc(n, answer);
    
}