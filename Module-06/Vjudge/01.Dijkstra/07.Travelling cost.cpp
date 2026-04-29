#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
vector<ll> dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n+1,inf);
    vector<bool>pros(n+1);
    dis[src]=false;
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
    int N;
    cin>>N;
    vector<pair<int,ll>>g[501];
    for(int i=0;i<N;i++){
        int a,b,w;
        cin>>a>>b>>w;
        g[a].push_back({b,w});
        g[b].push_back({a,w});
    }
    int u;
    cin>>u;
    auto ans=dijkstra(u,501,g);
    int Q;
    cin>>Q;
    while(Q--){
        int v;
        cin>>v;
        if(ans[v]==inf)cout<<"NO PATH\n";
        else cout<<ans[v]<<'\n';
    }
}