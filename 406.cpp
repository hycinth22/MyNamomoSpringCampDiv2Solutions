#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string str; cin>>str;
        string strrev=str; reverse(strrev.begin(), strrev.end());
        bool hasmatch=false;
        for(int i=0; i<n; i++){
            bool match=true;
            for(int j=i; j<i+n; j++){
                if(strrev[j%n]!=str[j-i]){
                    match=false;
                    break;
                }
            }
            if(match) hasmatch=true;
        }
        cout<< (hasmatch?"YES":"NO") << '\n';
    }
}
