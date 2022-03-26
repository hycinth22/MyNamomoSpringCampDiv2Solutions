#include <bits/stdc++.h>
using namespace std;

bool isprime(long long x){
    for(long long i=2; i<=sqrt(x); i++){
        if(x%i==0) return false;
    }
    return true;
}

bool hasnofactor(long long x){
    for(long long i=2; i<=sqrt(x); i++){
        if(x%(i*i)==0) return false;
    }
    return true;
}

long long gcd(long long a, long long b){
    return b==0?a:gcd(b, a%b);
}

int main(){
    long long a,b; cin>>a>>b;
    if(a!=b && isprime(a) && isprime(b)){
        cout<<"full credit";
    } else if (hasnofactor(a) && hasnofactor(b) && gcd(a, b)<=1) {
        // a*b不是任意大于1的整数的平方的整数倍
        // 等价于
        // a中没有大于1的平方因子 && b中没有大于1的平方因子
        // && a和b没有相同的一次因子（gcd==1）
        cout<<"partial credit";
    } else {
        cout<<"no credit";
    }
}
