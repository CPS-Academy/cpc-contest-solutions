#include <bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
    if(x>y)return true;
    return false;
}
int main() {
    int n,ans=0;
    cin>>n;
    vector<int>a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end(),cmp);
    while(a[1]>0){
        ans++;
        a[0]--;
        a[1]--;
        sort(a.begin(),a.end(),cmp);
    }
    cout<<ans<<'\n';
}
