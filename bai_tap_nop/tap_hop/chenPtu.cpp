// Viết chương trình thêm phần tử x vào tập hợp A
#include <iostream>
using namespace std;

int main()
{
  int n, k, x;
  cin >> n;
  int arr[100];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Nhap phan vi tri can chen"; cin >> k;
  cout << "Nhap gia tri chen vao: "; cin >> x;
  for (int i = n; i >= k + 1; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[k] = x;
  n++;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}