#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
//templete from SphereOJ "Travelling cost"
vector<ll> Dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n,inf);
    vector<bool>pros(n);
    dis[src]=0;
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>>q;
    q.push({0,src});
    while(q.size()){
        auto [d,u]=q.top();
        q.pop();
        if(pros[u])continue;
        pros[u]=true;
        for(auto [v,dis_u_v]:g[u]){
            if(dis[v]>dis[u]+dis_u_v){
                dis[v]=dis[u]+dis_u_v;
                q.push({dis[v],v});
            }
        }
    }
    return dis;
}
int main(){
    int t,n;
    cin>>t>>n;
    vector<pair<int,ll>>g[n+1];
    for(int i=0;i<t;i++){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    auto dis=Dijkstra(n,n+1,g);
    cout<<dis[1]<<'\n';
}

