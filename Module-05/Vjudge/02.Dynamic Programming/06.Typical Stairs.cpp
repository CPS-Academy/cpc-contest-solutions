#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int n,m;
int dp[100005];
int call(int x){
    if(x==n)return 1;
    if(x>n)return 0;
    if(dp[x]!=-1){
        return dp[x];
    }
    long long ans;
    ans=call(x+1)+call(x+2);
    ans%=mod;
    dp[x]=ans;
    return ans;
}
int main(){
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        dp[x]=0;
    }
    cout<<call(0)<<'\n';
}