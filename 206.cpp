#include <bits/stdc++.h>
using namespace std;

bool isok(string &s1, string &s2)
{
    if (s1.size() != s2.size())
        return false;
    int cnt1 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '1')
            ++cnt1;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '0' && s2[i] == '1' && !(cnt1 >= 1))
            return false;
        if (s1[i] == '1' && s2[i] == '0')
        {
            if (cnt1 >= 2)
                --cnt1;
            else
                return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << (isok(s1, s2) ? "YES" : "NO") << endl;
    }
}