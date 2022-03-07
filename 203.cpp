#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    vector<int> dp(n);
    for (int i=0;i<n;i++) {
    dp[i]=max(dp[i],v[i]);
    for (int j=i+1;j<n;j++) {
        if(v[j]>v[i]) {
            dp[j]=max(dp[j], dp[i]+v[j]);
        }
    }
    }
    int ans=0;
    for (int i=0;i<n;i++) {
        ans=max(ans, dp[i]);
    }
    cout<<ans;
}