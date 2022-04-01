#include<bits/stdc++.h>
using namespace std;

int n; vector<int> hi;

bool check(int e){
    for(int i=0; i<n; i++){
        e += e-hi[i]; // ע�⣬��hi>E�����������������¡�
        // �⽫ʹ��eÿ�μ�����Ϊ2��������������ڽ���1e5�κ�������´�Լ��2^100000��������ԶԶ����������ı�ʾ��Χ��long longҲ̫С�ˣ���
        if (e<0) return false;
        if (e>=1e5) return true; // ����취������������ǰ��ֹ�����ﵽH�����޺󣬽�����������������������ʧ�ܣ�������ǿ����ڴ�ʱ��ǰ����true
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
    // ���һ��ѭ��ʱ��Ȼ��l==r
    // ��ˣ��������һ��check�Ľ����Ρ���Ȼ��r+1==l��lָ���һ��check�ɹ��ߣ��ɷֱ�������֤����
    cout<<l;
}
