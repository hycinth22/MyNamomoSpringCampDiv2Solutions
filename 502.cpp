#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int k=n/2;
        vector<int> v(n); for(int i=0;i<n;i++) cin>>v[i];
        int fff=0, x=v.back();
        while(fff < n && v[fff]==x) fff++; // 开头连续x序列的第一个x的后一个位置
        int eee=n-1;
        while(eee >= 0 && v[eee]==x) eee--; // 尾随连续x序列的第一个x
        eee++;
        if(fff<eee){
            int cnt=n-eee, d=0;
            while(cnt<n-fff && cnt<=k) {
                cnt *= 2;
                d++;
                int t = n-cnt-1;
                while(t>=0 && v[t]==x) t--;
                cnt = n-1-t;
            }
            while(cnt<n-fff){
                cnt += k;
                d++;
            }
            cout<<d<<"\n";
        } else{
            cout<<"0\n";
        }
    }
}
