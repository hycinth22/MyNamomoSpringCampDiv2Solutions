#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
const int MAXM = 200010;

long long dp[10];;
long long len[MAXM+2]; // len[i]代表 0经过i次变换后的长度

void init() {
    dp[0]=1;
    for (int i=1; i<=MAXM; i++) {
        int dp9=dp[9];
        for (int j=9; j>=2; j--) {
            dp[j]=dp[j-1];
        }
        dp[1]=(dp9+dp[0])%MOD;
        dp[0]=dp9;
        for (int j=0; j<10; j++) {
            len[i]+=dp[j];
        }
    }
    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    init();
    int t; cin>>t;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        long long ans=0;
        while(n){
            int t = n%10;
            ans = ( ans+len[m+t] )%MOD;
            n/=10;
        }
        cout << ans << '\n';
    }
    
}
