#include <bits/stdc++.h>
using namespace std;

int ai[100005];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("ex_tournament2.in", "r", stdin);
    int n,k; cin>>n>>k;
    if(n==0){
        cout<<0; return 0;
    }
    for(int i=0;i<n;i++) cin>>ai[i];
    sort(ai, ai+n);
    int ans=1;
    for(int i=n-2;i>=0 && ai[i+1]-ai[i]<=k ;i--){
        ans++;
    }
    cout<<ans;
}
