// 2) Tính tổng các ước số của số nguyên dương n.
#include <iostream>
using namespace std;

int sum(int n, int i)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n % i == 0)
  {
    return i + sum(n, i++);
  }
  else
    return sum(n, i++);
}

int main()
{
  int n;
  cin >> n;
  cout << sum(n, 1);
  return 0;
}