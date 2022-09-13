#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A[5] = {5, 4, 3, 2, 1};
    int B[5] = {6, 7, 5, 3, 1};
    sort(A, A + 5);
    sort(B, B + 5);

    if (sizeof(A) == sizeof(B))
    {
        bool check = true;
        for (int i = 0; i < 5; i++)
        {
            if (A[i] != B[i])
            {
                cout << "Khong bang nhau";
                check = false;
                break;
            }
        }
        if (check == true)
        {
            cout << "Hai mang bang nhau";
        }
    }
    else
    {
        cout << "Khong bang nhau";
    }

    return 0;
}