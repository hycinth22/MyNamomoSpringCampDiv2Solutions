#include <bits/stdc++.h>
using namespace std;
int idx[26], n;
string s;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s;
    n = s.size();
    long long t = 0;
    fill(idx, idx + 26, -1);
    for (string::size_type i = 0; i < n; i++)
    {
        int iidx = s[i] - 'a';
        t += (i - idx[iidx]) * (n - i);
        idx[iidx] = i;
    }
    cout << t;
}
