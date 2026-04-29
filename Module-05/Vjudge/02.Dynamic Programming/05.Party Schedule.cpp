#include <bits/stdc++.h>
using namespace std;
int n,k;
int w[101],v[101];
pair<int,int>dp[101][501];
pair<int,int> call(int ind,int money_left){
    //base
    if(ind==n){
        return {0,0};
    }
    //dp
    if(dp[ind][money_left].second!=-1){
        return dp[ind][money_left];
    }
    //body
    auto ans=call(ind+1,money_left);
    if(money_left>=w[ind]){
        auto tmp=call(ind+1,money_left-w[ind]);
        tmp.first+=w[ind];
        tmp.second+=v[ind];
        if(tmp.second>ans.second){
            ans=tmp;
        }
        if(tmp.second==ans.second){
            if(tmp.first<ans.first){
                ans=tmp;
            }
        }
    }
    dp[ind][money_left]=ans;
    return ans;
}
int main() {
    while(1){
        cin>>k>>n;
        if(k==0&&n==0)break;
        for(int i=0;i<n;i++){
            cin>>w[i]>>v[i];
        }
        memset(dp,-1,sizeof(dp));
        auto tmp=call(0,k);
        cout<<tmp.first<<" "<<tmp.second<<"\n";
    }
}