#include <bits/stdc++.h>
using namespace std;

int parse(string& s, int t){
    int num=0; int weight = 1;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]>='0' && s[i]<='9'){
            num += (s[i]-'0')*weight;
        } else if(s[i]>='A' && s[i]<='Z'){
            num += (s[i]-'A'+10)*weight;
        } else if(s[i]>='a' && s[i]<='z'){
            num += (s[i]-'a'+36)*weight;
        }
        weight *= t;
    }
    return num;
}

char toChar(int n){
    if (n>=0 && n<=9){
        return '0'+n;
    }
    if (n>=10 && n<=35){
        return 'A'+(n-10);
    }
    if (n>=36 && n<=61){
        return 'a'+(n-36);
    }
    return '*';
}

int ai[100005];
int n,m;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    long long sum=0;
    while(n--){
        int t; string s; cin>>t>>s;
        sum += parse(s, t);
    }
    string ans;
    if(sum==0) ans="0";
    else while(sum){
        ans += toChar(sum%m);
        sum /= m;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}
