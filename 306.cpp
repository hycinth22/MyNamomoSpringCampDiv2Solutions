#include<bits/stdc++.h>
using namespace std;

int a[300];
long long x[300][300];
long long dp[300][300];
const int MOD = 1000003;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
        x[i][i]=a[i];
    	for(int j=i+1;j<n;j++){
            x[i][j]=x[i][j-1]*a[j]%MOD;
        }
    }
    for(int len=1; len<n ; len++)
    for(int i=0; i<n && i+len<n; i++){
        int j=i+len;
        for(int k=i;k<j;k++){
            dp[i][j]=max(dp[i][j], dp[i][k] + dp[k+1][j]
             + (x[i][k]-x[k+1][j])*(x[i][k]-x[k+1][j]) );
        }
    }
    cout<<dp[0][n-1];
}
