 #include <bits/stdc++.h>
using namespace std;

int cnt[2*30+1];
int ans=0;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,c; cin>>n>>c;
    vector<int> vd(n);
    for(int i=0; i<n;i++) {
        cin>>vd[i];
        cnt[vd[i]]++;
    }
    for(int i=0; i<n;i++) {
        if(vd[i]-c>=0)
            ans += cnt[vd[i]-c];
    }
    cout << ans;
}
