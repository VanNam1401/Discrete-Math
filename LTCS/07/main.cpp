#include <iostream>
using namespace std;

int nhiphan(int n)
{
	int temp;
	if(n == 0)
		return 0;
	else 
		temp = n % 2;
	return nhiphan(n / 2) * 10 + temp;
}

int main() {
	int n; cin >> n;
	cout << nhiphan(n);

}
