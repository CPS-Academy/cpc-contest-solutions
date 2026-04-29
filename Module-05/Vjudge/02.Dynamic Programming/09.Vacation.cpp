#include <bits/stdc++.h>
using namespace std;
int n;
int a[100005][3];
int dp[100005][3];
int call(int ind,int activity){
    if(ind==n)return 0;
    if(dp[ind][activity]!=-1){
        return dp[ind][activity];
    }
    int ans=a[ind][activity]+max(call(ind+1,(activity+1)%3),call(ind+1,(activity+2)%3));
    dp[ind][activity]=ans;
    return ans;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    memset(dp,-1,sizeof(dp));
    cout<<max({call(0,0),call(0,1),call(0,2)});
}