 #include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    unsigned long long n; cin>>n;
    unsigned long long ans=0;
    if(n<10){
        ans = (1+n)*n/2;
    } else {
        ans = 45;
        unsigned long long t=10, t2=100;
        while(t2 < n){
            unsigned long long num=t2-t;
            //printf("plus from %llu to %llu %llu\n", t, t2-1ull, (1+num)*num/2);
            ans = (ans+((1+num)%MOD*(num%MOD))/2)%MOD;
            t = t2;
            t2 *= 10;
        }
        unsigned long long num=n-t+1;
        ans = (ans+((1+num)%MOD*(num%MOD))/2)%MOD;
        //printf("plus from %llu to %llu. %llu\n", t, n, (1+num)*num/2);
    }
    cout<<ans;
}
