#include<bits/stdc++.h>
using namespace std;

vector<int> bi; int maxb=0;
queue<int> bfsq;
unordered_set<int> visited;
unordered_map<int, int> ans;

void inqueue(int x){
    if (!visited.count(x) && x>0 && x<=1e5){
        bfsq.push(x);
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a,q; cin>>a>>q;
    bi.resize(q);
    for(int i=0; i<q; i++) {
        cin>>bi[i]; ans[bi[i]]=0;
        if (bi[i]>maxb) maxb=bi[i];
    }
    bfsq.push(a); int level=0;
    while(!bfsq.empty()){
        int sz=bfsq.size();
        for (int i=0; i<sz; i++){
            int x=bfsq.front(); bfsq.pop();
            if (visited.count(x)) continue;
            visited.insert(x);
            if (ans.count(x)) {
                ans[x]=level;
            }
            inqueue(x+1);
            inqueue(x*2);
            inqueue(x*3);
            inqueue(x-1);
        }
        level++;
    }
    for(int i=0; i<q; i++){
        cout<<ans[bi[i]]<<" ";
    }
}
