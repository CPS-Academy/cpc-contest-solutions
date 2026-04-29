#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
//templete from SphereOJ "Travelling cost"
vector<vector<ll>> Dijkstra(ll src,ll n,vector<pair<ll,ll>>g[],vector<ll>slowness){
    vector<vector<ll>>dis(n,vector<ll>(1001,inf));
    vector<vector<bool>>pros(n,vector<bool>(1001));
    dis[src][slowness[src]]=0;
    priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<>>q;
    q.push({0,{src,slowness[src]}});
    while(q.size()){
        auto [d,tmp]=q.top();
        auto [u,k]=tmp;
        q.pop();
        if(pros[u][k])continue;
        pros[u][k]=true;
        for(auto [v,dis_u_v]:g[u]){
            ll cost=dis[u][k]+k*dis_u_v;
            ll c=min(k,slowness[v]);
            if(dis[v][c]>cost){
                dis[v][c]=cost;
                q.push({dis[v][c],{v,c}});
            }
        }
    }
    return dis;
}
int main(){
    ll q;
    cin>>q;
    while(q--){
        ll n,m;
        cin>>n>>m;
        vector<pair<ll,ll>>g[n+1];
        for(int i=0;i<m;i++){
            ll u,v,w;
            cin>>u>>v>>w;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        vector<ll>slowness(n+1);
        for(int i=1;i<=n;i++){
            cin>>slowness[i];
        }
        auto dis=Dijkstra(1,n+1,g,slowness);
        ll ans=*min_element(dis[n].begin(),dis[n].end());
        cout<<ans<<'\n';
    }
}

