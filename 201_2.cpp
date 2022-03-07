#include<bits/stdc++.h>
using namespace std;

unordered_map<int, vector< pair<int,int> > > tasks;
vector<int> dp;

int main(){
    int n;cin>>n; int maxt=0;
    for(int i=0;i<n;i++){
        int si, ei, wi; cin>>si>>ei>>wi;
        tasks[ei].push_back({si, wi});
        maxt=max(maxt, ei);
    }
    dp.resize(maxt+2, 0);
    for(int t=1;t<=maxt;t++) {
        dp[t]=dp[t-1];
        if(tasks.count(t))
        for(auto& task: tasks[t]){
            dp[t] = max(dp[task.first]+task.second, dp[t]);
        }
    }
    cout<<dp[maxt];
}
