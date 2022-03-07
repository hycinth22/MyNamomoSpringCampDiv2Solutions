#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    vector<int> dp(n);
    dp[0]=v[0];
    for (int i=1;i<n;i++) {
    dp[i]=v[i];
    for (int j=0;j<i;j++) {
        if(v[j]<v[i]) {
            dp[i]=max(dp[i], dp[j]+v[i]);
        }
    }
    }
    int ans=0;
    for (int i=0;i<n;i++) {
        ans=max(ans, dp[i]);
    }
    cout<<ans;
}