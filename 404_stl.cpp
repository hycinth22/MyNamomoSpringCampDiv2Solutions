#include <bits/stdc++.h>
using namespace std;

int d[100];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>>n; int k=0;
    for(int i=1; i<=n; i++){
        int pi; cin>>pi;
        for(int c=0; c<pi; c++){
            d[k++]=i;
        }
    }
    do{
        for(int i=0; i<k; i++){
            cout<<d[i]<<" ";
        }
        cout<<'\n';
    }while(next_permutation(d, d+k));
}
