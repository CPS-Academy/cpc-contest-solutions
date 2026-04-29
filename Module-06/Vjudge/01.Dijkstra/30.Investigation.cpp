#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
ll mod=1e9+7;
// templete from sphereOJ "travelling cost"
vector<vector<ll>> Dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n,inf);
    vector<ll>ways(n,1);
    vector<ll>mn(n);
    vector<ll>mx(n);
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
                ways[v]=ways[u];
                mn[v]=mn[u]+1;
                mx[v]=mx[u]+1;
                q.push({dis[v],v});
            }
            else if(dis[v]==dis[u]+dis_u_v){
                ways[v]+=ways[u];
                ways[v]%=mod;
                mn[v]=min(mn[v],mn[u]+1);
                mx[v]=max(mx[v],mx[u]+1);
            }
        }
    }
    return {dis,ways,mn,mx};
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<pair<int,ll>>g[n+1];
    for(int i=0;i<m;i++){
        int a,b;
        ll c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});
    }
    auto ans=Dijkstra(1,n+1,g);
    cout<<ans[0][n]<<" "<<ans[1][n]<<" "<<ans[2][n]<<" "<<ans[3][n]<<'\n';
}

