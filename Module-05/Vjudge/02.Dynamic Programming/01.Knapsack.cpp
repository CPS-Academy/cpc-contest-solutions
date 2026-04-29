#include <bits/stdc++.h>
using namespace std;
int n,kw;
int w[101],v[101];
long long dp[101][100001];
long long call(int index,int weight_left){
    //base case
    if(index>=n)return 0;
    //dp
    if(dp[index][weight_left]!=-1)return dp[index][weight_left];
    //body
    long long ans=call(index+1,weight_left);
    if(weight_left>=w[index]){
        ans=max(ans,v[index]+call(index+1,weight_left-w[index]));
    }
    dp[index][weight_left]=ans;
    return ans;
}
int main() {
    cin>>n>>kw;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    for(int i=0;i<101;i++){
        for(int j=0;j<100001;j++){
            dp[i][j]=-1;
        }
    }
    cout<<call(0,kw)<<endl;
}