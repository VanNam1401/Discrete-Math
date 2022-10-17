#include <iostream>
using namespace std;

void input(int arr[][10], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }
}
void output(int arr[][10], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
bool chuyenViMatrix(int arr[][10], int row, int col)
{
  if (row != col)
  {
    return false;
  }
  else
  {
    for (int i = 0; i < row; i++)
    {
      if (arr[i][i] != 1)
      {
        return false;
      }
    }
    for (int i = 0; i < row; i++)
    {
      for (int j = i + 1; j < row; j++)
      {
        if (arr[i][j] != 0 || arr[j][i] != 0)
        {
          return false;
        }
      }
    }
    return true;
  }
}
int main()
{
  int row, col;
  cout << "Nhap so hang: ";
  cin >> row;
  cout << "Nhap so cot: ";
  cin >> col;
  int arr[row][col];
  input(arr, row, col);
  output(arr, row, col);
  cout << chuyenViMatrix(arr, row, col);
  return 0;
}