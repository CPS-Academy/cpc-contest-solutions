#include <bits/stdc++.h>
using namespace std;
int n,x;
long long mod=1e9+7;
vector<int>c;
int dp[1000005];
int call(int remaining_x){
    //base
    if(remaining_x==0)return 1;
    //dp
    if(dp[remaining_x]!=-1){
        return dp[remaining_x];
    }
    //body
    long long ans=0;
    for(auto coin:c){
        if(coin<=remaining_x){
            ans+=call(remaining_x-coin);
        }
    }
    ans%=mod;
    dp[remaining_x]=ans;
    return ans;
}
int main(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        c.push_back(tmp);
    }
    memset(dp,-1,sizeof(dp));
    cout<<call(x);
}