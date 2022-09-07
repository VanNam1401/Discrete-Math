#include <iostream>
using namespace std;

int check(string s)
{
    // toan tu logic
    int count = (s[0] != ' ');
    for (int i = 0; i < s.length(); ++i) {
        if(s[i] == ' ' && s[i + 1] != ' ')
        {
            count++;
        }
    }
    return count;
}
int main() {
    string s;
    getline(cin, s);
    cout << check(s);
    return 0;
}
