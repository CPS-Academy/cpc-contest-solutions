#include <bits/stdc++.h>
using namespace std;
#define I ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
ll inf=1e18;
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
    I
    int k,Q;
    cin>>Q;
    for(k=1;k<=Q;k++){
        int n,m,x,q;
        cin>>n>>m>>x>>q;
        vector<pair<int,ll>>g[n+1],rev_g[n+1];
        for(int i=0;i<m;i++){
            int u,v,w;
            cin>>u>>v>>w;
            g[u].push_back({v,w});
            rev_g[v].push_back({u,w});
        }
        auto dis=Dijkstra(x,n+1,g);
        auto rev_dis=Dijkstra(x,n+1,rev_g);
        cout<<"Case "<<k<<":\n";
        while(q--){
            int s,t;
            cin>>s>>t;
            ll ans=rev_dis[s]+dis[t];
            if(ans>=inf)cout<<"Be seeing ya, John\n";
            else cout<<ans<<'\n';
        }
    }
}

