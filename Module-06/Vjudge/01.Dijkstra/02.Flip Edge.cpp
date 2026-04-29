#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;

//Templete from SphereOJ Travelling cost

vector<ll> Dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n+1,inf);
    vector<bool>pros(n+1);
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
    ll n,m,x;
    cin>>n>>m>>x;
    vector<pair<int,ll>>g[2*n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back({v,1});
        g[v+n].push_back({u+n,1});
    }
    for(int i=1;i<=n;i++){
        g[i].push_back({i+n,x});
        g[i+n].push_back({i,x});
    }
    auto dis=Dijkstra(1,2*n+1,g);
    cout<<min(dis[n],dis[n+n]);
}

