#include <bits/stdc++.h>
using namespace std;
int n,kw;
int main() {
    cin>>n>>kw;
    vector<int>prev_dp(kw+1,-1),cur_dp(kw+1,-1);
    vector<int>w(n),v(n);
    for(auto &x:w){
        cin>>x;
    }
    for(auto &x:v){
        cin>>x;
    }
    prev_dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=kw;j++){
            if(j<w[i]){
                cur_dp[j]=prev_dp[j];
            }
            else if(prev_dp[j-w[i]]!=-1){
                cur_dp[j]=max(prev_dp[j],prev_dp[j-w[i]]+v[i]);
            }
        }
        prev_dp=cur_dp;
    }
    cout<<*max_element(cur_dp.begin(),cur_dp.end())<<'\n';
}