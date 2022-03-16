#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>> n;
    deque<int> d;
    while(n--){
        string op; cin>>op;
        if (op=="insert"){
            int x,y; cin>>x>>y;
            auto pos = d.begin(); advance(pos, x);
            d.insert(pos, y);
        } else if (op=="delete"){
            int x; cin>>x;
            auto pos = d.begin(); advance(pos, x-1);
            d.erase(pos);
        } else if (op=="query"){
            int k; cin>>k;
            auto pos = d.begin(); advance(pos, k-1);
            cout<<*pos<<'\n';
        }
    }
    return 0;
}
