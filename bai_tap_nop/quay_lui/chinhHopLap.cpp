#include <iostream>
using namespace std;

int n, k, A[100], x[100];
void output(int A[], int n)
{
  for (int i = 1; i <= k; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
}

void chinhHopLap(int i)
{
  for (int j = 1; j <= n; j++)
  {
    x[i] = j;
    if (i == k)
    {
      output(x, k);
    }
    else
      chinhHopLap(i + 1);
  }
}

int main()
{
  cout << "Nhap n: ";
  cin >> n;
  cout << "Nhap k: ";
  cin >> k;
  cout << "Chinh hop lap: " << endl;
  chinhHopLap(1);
}