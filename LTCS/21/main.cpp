#include <iostream>
using namespace std;

// kiem tra phai so hoan thien khong
bool check_finishingNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == 2*n)
        return true;
    return false;

}
int main() {
    int n; cin >> n;
    if(check_finishingNumber(n))
    {
        cout << "La so hoan thien";
    }    else cout << "khong la so hoan thien";


    return 0;
}
