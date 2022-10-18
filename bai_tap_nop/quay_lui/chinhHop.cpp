#include <iostream>
#define max 20
using namespace std;
int n, k, p[max], b[max];
void input()
{
  cout << "Nhap n: ";
  cin >> n;
  cout << "Nhap k: ";
  cin >> k;
  for (int i = 1; i <= n; i++)
  {
    b[i] = 1;
  }
}
void output()
{
  for (int i = 1; i <= k; i++)
  {
    cout << p[i] << " ";
  }
  cout << endl;
}
void chinhHop(int i)
{
  for (int j = 1; j <= n; j++)
  {
    if (b[j])
    {
      p[i] = j;
      b[j] = 0;
      if (i == k)
      {
        output();
      }
      else
      {
        chinhHop(i + 1);
      }
      b[j] = 1;
    }
  }
}
int main()
{
  input();
  chinhHop(1);
  return 0;
}
