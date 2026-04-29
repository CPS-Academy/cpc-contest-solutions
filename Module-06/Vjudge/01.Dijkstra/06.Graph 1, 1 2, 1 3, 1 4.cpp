#include <bits/stdc++.h>
using namespace std;
#define I ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
double inf=1e18;
vector<double> Dijkstra(int src,int n,vector<pair<int,double>>g[]){
    vector<double>dis(n+1,inf);
    vector<bool>pros(n+1);
    dis[src]=0;
    priority_queue<pair<double,int>,vector<pair<double,int>>,greater<>>q;
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
    int n,m;
    cin>>n>>m;
    vector<pair<int,double>>g[n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,1.0/w});
        g[v].push_back({u,1.0/w});
    }
    auto ans=Dijkstra(1,n,g);
    for(int i=2;i<=n;i++){
        cout<<ans[i]<<'\n';
    }
}

