#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    //Graph input
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,int>>g[n+1];
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        g[a].push_back({c,b});
    }
    //bfs to calculate depth
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>>q;
    q.push({0,1});
    vector<ll>dis(n+1,LLONG_MAX);
    dis[1]=0;
    vector<int>pros(n+1);
    while(q.size()){
        auto [d,u]=q.top();
        q.pop();
        if(pros[u])continue;
        pros[u]=1;
        for(auto [dis_u_v,v]:g[u]){
            if(dis[v]>d+dis_u_v){ 
                q.push({d+dis_u_v,v});
                dis[v]=d+dis_u_v;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
}