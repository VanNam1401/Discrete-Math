#include <iostream>
using namespace std;

int main()
{
    int array[6] = {1, 2, 2, 3, 4, 5};
    int b[6] = {1, 1, 1, 1, 1, 1};
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (b[i] == 1)
        {

            for (int j = i + 1; j < 6; j++)
            {
                if (array[i] == array[j])
                {
                    b[j] = 0;
                }
            }
            b[i] = 0;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}