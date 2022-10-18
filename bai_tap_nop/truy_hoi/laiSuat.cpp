#include <iostream>
using namespace std;

int laiSuat(int n, int p0, int d)
{
  if (n == 0)
  {
    return p0;
  }else {
    
    return laiSuat(n - 1, p0, d) + d * laiSuat(n - 1, p0, d);
  }
}
int main()
{
  int n, p0 = 10000, d = 0.07;
  cout << "Nhap so nam: ";
  cin >> n;
  cout << laiSuat(n, p0, d);
}