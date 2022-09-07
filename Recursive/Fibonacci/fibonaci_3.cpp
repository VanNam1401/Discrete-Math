//3) Viết giải thuật đệ quy cho bài toán tìm số Fibonaci F(n)=F(n-1)+ F(n-2)
#include <iostream>
using namespace std;

int basicRecursionFibonacci(int n)
{
    if (n == 1|| n == 2)
        return 1;
        return basicRecursionFibonacci(n - 1) + basicRecursionFibonacci(n - 2);
}
int memoizeRecursionFibonacci(int n, int arr[])
{
    if (arr[n])
        return arr[n];
    arr[n] = memoizeRecursionFibonacci(n - 1, arr) + memoizeRecursionFibonacci(n - 2, arr);
    return arr[n];
}

int BasicLoopFibonacci1(int n, int arr[])
{
    if (n == 1|| n == 2)
        return 1;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int factFibonacci(int n)
{
    if (n == 1|| n == 2)
        return 1;
    int first = 1, second = 1;
    for (int i = 3; i < n; i++)
    {
        second = first + second;
        first = second - first;
    }
    return second;
}
int main()
{
    int n;
    cin >> n;
    int arr[1000] = {0, 1, 1};
    cout << basicRecursionFibonacci(n) << endl;
    cout << memoizeRecursionFibonacci(n, arr) << endl;
    cout << BasicLoopFibonacci1(n, arr) << endl;
    cout << factFibonacci(n);

}

