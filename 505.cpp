#include <bits/stdc++.h>
using namespace std;

// bi*aj+bj > bj*ai+bi
bool cmp(const pair<long long,long long>& i, const pair<long long,long long>&j){
    return i.second*j.first+j.second > j.second*i.first+i.second;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>>n;
    vector< pair<long long,long long> > v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    long long ans=0; long long aprod = 1;
    //for(int i=0; i<n; i++){
    //    cout<<v[i].first<<","<<v[i].second<<endl;
    //}
    for(int i=n-1; i>=0; i--){
        ans = (ans+v[i].second*aprod)%1000000007;
        aprod = (aprod*v[i].first)%1000000007;
    }
    cout<<ans;
}
