#include<bits/stdc++.h>
using namespace std;

int n; string str;

int solve(){
    array<int, 26> cnt;
    array<bool, 26> impossible;
    bool none=true;
    for(char c='a'; c<='z'; c++){
        int i=0, j=str.size()-1;
        int ans=0; bool fail = false;
        cnt[c-'a']=0;
        impossible[c-'a']=false;
        while(i<j){
            if(str[i]==str[j]){
                i++; j--;
            } else if (str[i]==c) {
                i++; ans++;
            } else if (str[j]==c){
                j--; ans++;
            } else{
                impossible[c-'a']=true;
                break;
            }
        }
        if(!impossible[c-'a']){
            cnt[c-'a']=ans;
            none=false;
        }
    }
    if(none) return -1;
    int totalAns = INT_MAX;
    for(int i=0;i<26;i++){
        if(!impossible[i])
            totalAns=min(totalAns,cnt[i]);
    }
    return totalAns;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        cin>>n;
        cin>>str;
        cout<<solve()<<"\n";
    }
    return 0;
}
