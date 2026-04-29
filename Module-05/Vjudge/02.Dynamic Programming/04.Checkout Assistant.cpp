#include <bits/stdc++.h>
using namespace std;
int n;
int w[2001],v[2001];
long long dp[2001][5001];
long long call(int ind,int time_spent){
    if(time_spent>=n)return 0;
    if(ind==n){
        return 1e13;
    }
    if(dp[ind][time_spent]!=-1){
        return dp[ind][time_spent];
    }
    long long ans=call(ind+1,time_spent);
    ans=min(ans,v[ind]+call(ind+1,time_spent+w[ind]+1));
    dp[ind][time_spent]=ans;
    return ans;

}
int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<call(0,0);
}