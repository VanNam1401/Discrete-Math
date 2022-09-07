#include <iostream>
using namespace std;

bool kt_doixung(string s)
{
    for (int i = 0; i < s.length()/2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
int main() {
    string s;
    getline(cin, s);
    if (kt_doixung(s))
    {
        cout << "La xau doi xung";
    }
    else cout << "Khong la xau doi xung";
    return 0;
}
