#include <bits/stdc++.h>
using namespace std;
int n,kw;
int w[101],v[101];
long long dp[101][100001];
long long call(int ind,int val_left){
    //base
    if(val_left==0)return 0;
    if(ind==n)return 1e12;
    //dp
    if(dp[ind][val_left]!=-1){
        return dp[ind][val_left];
    }
    //body
    long long ans=call(ind+1,val_left);
    if(val_left>=v[ind]){
        ans=min(ans,w[ind]+call(ind+1,val_left-v[ind]));
    }
    dp[ind][val_left]=ans;
    return ans;
}
int main() {
    cin>>n>>kw;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    memset(dp,-1,sizeof(dp));
    long long ans=0;
    for(int value=0;value<100001;value++){
        long long tmp=call(0,value);
        if(tmp<=kw)ans=value;
    }
    cout<<ans;
}