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
    int n,m;
    cin>>n>>m;
    vector<pair<int,ll>>g[n+1],rg[n+1];
    vector<vector<ll>>edges;
    for(int i=0;i<m;i++){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        rg[v].push_back({u,w});
        edges.push_back({u,v,w});
    }
    auto dis1=Dijkstra(1,n+1,g);
    auto dis2=Dijkstra(n,n+1,rg);
    ll ans=dis1[n];
    for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];
        ll w=edge[2];
        ans=min(ans,dis1[u]+w/2+dis2[v]);
    }
    cout<<ans<<'\n';
}

