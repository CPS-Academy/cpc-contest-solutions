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
    ll n;
    cin>>n;
    vector<pair<int,ll>>g[n+1];
    for(int i=1;i<n;i++){
        ll a,b,x;
        cin>>a>>b>>x;
        g[i].push_back({i+1,a});
        g[i].push_back({x,b});
    }
    auto dis=Dijkstra(1,n+1,g);
    cout<<dis[n]<<'\n';
}

