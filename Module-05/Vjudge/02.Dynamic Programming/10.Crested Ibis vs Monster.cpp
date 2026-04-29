#include <bits/stdc++.h>
using namespace std;
int n,h;
vector<int>a,b;
int dp[10005];
int call(int h_left){
    //base
    if(h_left<=0)return 0;
    //dp
    if(dp[h_left]!=-1){
        return dp[h_left];
    }
    //body
    int ans=1e9;
    for(int i=0;i<n;i++){
        ans=min(ans,b[i]+call(h_left-a[i]));
    }
    dp[h_left]=ans;
    return ans;
}
int main(){
    cin>>h>>n;
    for(int i=0;i<n;i++){
        int t1,t2;
        cin>>t1>>t2;
        a.push_back(t1);
        b.push_back(t2);
    }
    memset(dp,-1,sizeof(dp));
    cout<<call(h);
}