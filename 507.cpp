#include<bits/stdc++.h>
using namespace std;

int n; vector<int> hi;

bool check(int e){
    for(int i=0; i<n; i++){
        e += e-hi[i]; // 注意，在hi>E（获得能量）的情况下。
        // 这将使得e每次几乎变为2倍。而这个操作在进行1e5次后极限情况下大约是2^100000的量级这远远超出计算机的表示范围（long long也太小了）。
        if (e<0) return false;
        if (e>=1e5) return true; // 解决办法：根据题意提前终止。当达到H的上限后，将总是增加能量而不可能再失败，因此我们可以在此时提前返回true
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n; hi.resize(n);
    for (int i=0; i<n; i++) cin>>hi[i];
    int l=0, r=100001;
    while(l<=r){
        int mid=(l+r)>>1;
        if(check(mid)){
            r=mid-1;
        } else{
            l=mid+1;
        }
    }
    // 最后一次循环时必然是l==r
    // 因此，不论最后一次check的结果如何。必然是r+1==l且l指向第一个check成功者（可分别自行验证）。
    cout<<l;
}
