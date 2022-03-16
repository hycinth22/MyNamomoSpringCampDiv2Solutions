#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n); int vmin=INT_MAX;
        for (int i=0; i<n; i++){
            cin>>v[i];
            vmin = min(vmin, v[i]);
        }
        int ans=0;
        for (int i=0; i<n; i++){
            ans = __gcd(ans, v[i]-vmin);
        }
        cout<< (ans==0?-1:ans) <<'\n';
    }
    return 0;
}
