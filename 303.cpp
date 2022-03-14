#include<bits/stdc++.h>
using namespace std;

vector< vector<char> > v;
int n;


// ��Ϊ����һ���Ǹ����󣨳��Ϳ���ͬ����
// ������ǿ�����һ������ѭ����ͬʱ���v[i][j]��v[j][i]
// ���ﵽͬʱ���ͬ�������ͬ�������Ч��
bool check(){
    if (n%2) return false;
    int cntRowB, cntColB;
    int repcntrow; char repcharrow;
    int repcntcol; char repcharcol;
    for(int i=0;i<n;i++){
        cntRowB=0;
        cntColB=0;
        repcharrow=v[i][0]; repcntrow=0;
        repcharcol=v[0][i]; repcntcol=0;
        for(int j=0;j<n;j++){
            if(v[i][j]=='B'){
                ++cntRowB;
            }
            if(v[j][i]=='B'){
                ++cntColB;
            }
            if(v[i][j]==repcharrow){
                ++repcntrow;
            } else {
                repcntrow=1;
                repcharrow=v[i][j];
            }
            if(repcntrow>=3) {
                return false;
            }
            if(v[j][i]==repcharcol){
                ++repcntcol;
            } else {
                repcntcol=1;
                repcharcol=v[j][i];
            }
            if(repcntcol>=3) {
                return false;
            }
        }
        if(n-cntRowB != cntRowB || n-cntColB != cntColB ) {
            return false;
        }
    }
    return true;
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>> n; v.resize(n, vector<char>(n) );
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>v[i][j];
    }
    }
    cout<< (check()?1:0);
    return 0;
}
