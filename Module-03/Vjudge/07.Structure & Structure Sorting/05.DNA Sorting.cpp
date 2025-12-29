#include <bits/stdc++.h>
using namespace std;
int n,m;
struct dna
{
    string s;
    int inv,ind;
    void input(int index){
        ind=index;
        inv=0;
        cin>>s;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                inv+=(s[i]>s[j]);
            }
        }
    }
};
bool cmp(dna &a,dna &b){
    if(a.inv<b.inv)return true;
    if(a.inv>b.inv)return false;
    if(a.ind<b.ind)return true;
    return false;
}
int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        if(k!=0)cout<<'\n';
        cin>>n>>m;
        dna a[m];
        for(int i=0;i<m;i++){
            a[i].input(i);
        }
        sort(a,a+m,cmp);
        for(int i=0;i<m;i++){
            cout<<a[i].s<<'\n';
        }
    }
}
