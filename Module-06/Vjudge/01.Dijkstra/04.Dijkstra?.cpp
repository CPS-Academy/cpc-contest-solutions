#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
vector<ll> dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n+1,inf);
    vector<ll>p(n+1,-1);
    vector<bool>pros(n+1);
    dis[src]=0;
    p[src]=src;
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
                p[v]=u;
            }
        }
    }
    return p;
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<pair<int,ll>>g[n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    auto par=dijkstra(1,n+1,g);
    if(par[n]==-1){
        cout<<-1<<'\n';
    }
    else{
        vector<ll>path={n};
        int x=par[n];
        while(x!=1){
            path.push_back(x);
            x=par[x];
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        for(auto x:path){
            cout<<x<<" ";
        }

    }
}

