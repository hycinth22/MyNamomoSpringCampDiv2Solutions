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
        // a*b�����������1��������ƽ����������
        // �ȼ���
        // a��û�д���1��ƽ������ && b��û�д���1��ƽ������
        // && a��bû����ͬ��һ�����ӣ�gcd==1��
        cout<<"partial credit";
    } else {
        cout<<"no credit";
    }
}
