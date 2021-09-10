#include <bits/stdc++.h>
using namespace std;

vector<string> subseq(string s)
{
    int n = s.size();

    vector<string> ans;

    // num is from 0 to (2 ^ n) - 1
    for (int num = 0; num < (1 << n); num++)
    {
        string sub = "";
        for (int i = 0; i < n; i++)
        {
            // Include the character which is at the set bit
            // Checking this for each num
            if (num & (1 << i))
            {
                sub += s[i];
            }
        }

        if (sub.size() > 0)
        {
            ans.push_back(sub);
        }
    }
    // Sorting
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s;
    cin >> s;

    vector<string> result = subseq(s);
    for (auto x : result)
    {
        cout << x << " ";
    }

    return 0;
}