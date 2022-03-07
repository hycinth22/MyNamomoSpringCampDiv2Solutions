#include<bits/stdc++.h2>
using namespace std;

int dp[102][102];
int access[102][102];
int N=1e9+7;

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>access[i][j];
    }
    }
    dp[0][0]=1;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i+1< n && access[i+1][j])
            dp[i+1][j]=(dp[i+1][j]+dp[i][j])%N;
        if(j+1<n && access[i][j+1])
            dp[i][j+1]=(dp[i][j+1]+dp[i][j])%N;
    }
    }
    cout<<dp[n-1][n-1];
}
