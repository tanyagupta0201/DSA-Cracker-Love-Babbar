#include <bits/stdc++.h>
using namespace std;

void permutations(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string rest_of_string = s.substr(0, i) + s.substr(i + 1);
        permutations(rest_of_string, ans + ch);
    }
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    permutations(s, "");
    return 0;
}