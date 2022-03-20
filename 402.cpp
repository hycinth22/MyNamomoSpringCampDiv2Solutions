#include <bits/stdc++.h>
using namespace std;
typedef list< pair<int,int> > cont;
cont cart;
map<int, cont::iterator> prices;
map<int, cont::iterator> tastes;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>>n;
    while(n--){
        int op; cin>>op;
        if(op==1){
            int w,t; cin>>w>>t;
            if(prices.count(w) || tastes.count(t)){
                continue;
            }
            auto it = cart.insert(cart.end(), make_pair(w, t));
            prices[w]=it;
            tastes[t]=it;
        } else if(op==2){
            auto it=prices.begin()->second;
            int w=it->first, t=it->second;
            //assert(w==prices.begin()->first);
            cart.erase(it);
            prices.erase(w);
            tastes.erase(t);
        } else if(op==3){
            auto it=tastes.begin()->second;
            int w=it->first, t=it->second;
            //assert(t==tastes.begin()->first);
            cart.erase(it);
            prices.erase(w);
            tastes.erase(t);
        }
    }
    long long ans=0;
    for(pair<int,int>& p: cart){
        ans += p.first;
    }
    cout<<ans;
}
