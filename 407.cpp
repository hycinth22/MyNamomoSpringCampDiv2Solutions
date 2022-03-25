#include <bits/stdc++.h>
using namespace std;

int t;
vector< unordered_set<int> > data;

bool isSubset(unordered_set<int>&a, unordered_set<int>&b){
    return all_of(b.begin(), b.end(), [&a](int x) {
        return a.count(x);
    });
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>t;
    for (int i=0; i<t; i++){
        int n;cin>>n;
        vector<int> ai(n);
        for (int j=0; j<n; j++){
            cin>>ai[j];
        }
        data.emplace_back(ai.begin(), ai.end());
    }
    for (int i=0; i<t; i++){
        bool no=any_of(data.begin(), data.end(), [&data, i](unordered_set<int>&x) {
            return &x!=&data[i] && x.size() <= data[i].size() && isSubset(data[i], x);
        });
        cout<<(no?"NO\n":"YES\n");
    }
}
