#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
        int n; cin>>n;
        v.clear(); v.resize(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            while(v[i]%2==0){
                v[i]/=2;
            }
            while(v[i]%3==0){
                v[i]/=3;
            }
        }
        bool same=all_of(v.begin(), v.end(), bind2nd(equal_to<int>(), v[0]));
        cout<< (same?"YES":"NO") <<'\n';
    }
}
