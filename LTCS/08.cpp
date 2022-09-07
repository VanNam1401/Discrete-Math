#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    bool first = true;
    while (n > 0)
	{
		temp = n % 10;
		if (first == true)
		{
			if (n != 0)
			{
				cout << temp;
				first = false;
			}
		}

	else
	{
		cout << temp;
	}
      n = n / 10;
	}

}
