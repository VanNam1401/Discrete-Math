#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int b[5] = {1, 1, 1, 1, 1}; // mảng đánh dấu.
    int s = 0, n = 5; // s: đếm số phần tử.
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            for (int j = i + 1; j < n; j++)
                if (a[i] == a[j])
                    b[j] == 0;
            b[i] == 0;
            s++;
        }
    }
    cout << s << endl;
    return 0;
}