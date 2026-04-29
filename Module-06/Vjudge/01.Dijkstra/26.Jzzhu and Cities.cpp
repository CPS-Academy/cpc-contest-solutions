#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
//templete from SphereOJ "Travelling cost"
pair<vector<ll>,vector<ll>> Dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n,inf),ways(n);
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
                ways[v]=1;
            }
            else if(dis[v]==dis[u]+dis_u_v){
                ways[v]++;
            }
        }
    }
    return {dis,ways};
}
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<pair<int,ll>>g[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    vector<ll>best_train_route(n+1,inf);
    for(int i=0;i<k;i++){
        int v;
        ll w;
        cin>>v>>w;
        best_train_route[v]=min(best_train_route[v],w);
    }
    for(int i=2;i<=n;i++){
        if(best_train_route[i]!=inf){
            g[1].push_back({i,best_train_route[i]});
        }
    }
    auto [dis,ways]=Dijkstra(1,n+1,g);
    ll ans=k;
    for(int i=2;i<=n;i++){
        ll b=best_train_route[i];
        if(b!=inf&&b==dis[i]&&ways[i]==1){
            ans--;
        }
    }
    cout<<ans<<'\n';
}

