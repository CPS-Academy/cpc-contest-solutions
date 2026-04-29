#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;

//Templete from SphereOJ "Travelling cost"
vector<vector<ll>> Dijkstra(int src,int n,vector<pair<int,pair<int,int>>>g[],int k){
    vector<vector<ll>>dis(n+1,vector<ll>(k+1,inf));
    vector<vector<bool>>pros(n+1,vector<bool>(k+1));
    dis[src][0]=0;
    priority_queue<pair<ll,pair<int,int>>,vector<pair<ll,pair<int,int>>>,greater<>>q;
    q.push({0,{src,0}});
    while(q.size()){
        auto [d,node]=q.top();
        q.pop();
        auto [u,cost]=node;
        if(pros[u][cost])continue;
        pros[u][cost]=true;
        for(auto [v,dis_u_v]:g[u]){
            auto [d,c]=dis_u_v;
            if(c+cost>k)continue;
            if(dis[v][c+cost]>dis[u][cost]+d){
                dis[v][c+cost]=dis[u][cost]+d;
                q.push({dis[v][c+cost],{v,c+cost}});
            }
        }
    }
    return dis;
}
int main(){
    int q;
    cin>>q;
    while(q--){
        int k,n,m;
        cin>>k>>n>>m;
        vector<pair<int,pair<int,int>>>g[n+1];
        for(int i=0;i<m;i++){
            int u,v,dis,toll;
            cin>>u>>v>>dis>>toll;
            g[u].push_back({v,{dis,toll}});
        }
        auto dis=Dijkstra(1,n+1,g,k);
        ll ans=inf;
        for(int i=0;i<k;i++){
            ans=min(ans,dis[n][i]);
        }
        if(ans==inf)ans=-1;
        cout<<ans<<'\n';
    }
}



