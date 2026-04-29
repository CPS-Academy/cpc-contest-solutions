#include <bits/stdc++.h>
using namespace std;
int n,x;
vector<int>c;
int dp[1000005];
int call(int remaining_x){
    //base
    if(remaining_x==0)return 0;
    if(remaining_x<0)return 1e9;
    //dp
    if(dp[remaining_x]!=-1){
        return dp[remaining_x];
    }
    //body
    int ans=1e9;
    for(auto t:c){
        if(t<=remaining_x)ans=min(ans,1+call(remaining_x-t));
    }
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
    int tmp=call(x);
    if(tmp>=(int)1e9){
        tmp=-1;
    }
    cout<<tmp<<'\n';
}