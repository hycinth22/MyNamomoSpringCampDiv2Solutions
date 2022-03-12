#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>> n;
    stack<int> s;
    int i=1;
    while(n--){
        int t; cin>>t;
        while(i<=t) {
            cout<<"push "<<i<<'\n';
            s.push(i);
            i++;
        }
        if(!s.empty()){
            if (s.top() == t){
                cout<<"pop\n";
                s.pop();
            }/* else{
                cout<<"illgeal input\n";
                return 1;
            }*/
        }
    }
    return 0;
}
