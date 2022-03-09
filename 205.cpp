#include<bits/stdc++.h>
using namespace std;

set< pair<int,int> > kinds;
vector< pair<int,int> > v;

// a b
// b a%b

int gcd(int a, int b){
    while(b){
        int t=a;
        a=b;
        b=t%b;
    }
    return a;
    //return b==0?a:gcd(b, a%b);
}


int main(){
    int n; cin>>n;
    for (int i=0;i<n;i++){
        int xi, yi; cin>>xi>>yi;
        v.push_back(make_pair(xi, yi));
    }
    for (int i=0; i<n; i++)
    for (int j=i+1; j<n; j++){
        int dx=v[i].first-v[j].first;
        int dy=v[i].second-v[j].second;
        int k=gcd(abs(dx), abs(dy));
        kinds.insert(make_pair(dx/k, dy/k));
    }
    cout<<kinds.size()*2;
}
