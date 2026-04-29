#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
//templete from SphereOJ "Travelling cost"
vector<ll> Dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>weight_limit(n);
    vector<bool>pros(n);
    weight_limit[src]=inf;
    priority_queue<pair<ll,int>>q;
    q.push({inf,src});
    while(q.size()){
        auto [d,u]=q.top();
        q.pop();
        if(pros[u])continue;
        pros[u]=true;
        for(auto [v,dis_u_v]:g[u]){
            if(weight_limit[v]<min(weight_limit[u],dis_u_v)){
                weight_limit[v]=min(weight_limit[u],dis_u_v);
                q.push({weight_limit[v],v});
            }
        }
    }
    return weight_limit;
}
int main(){
    int q;
    cin>>q;
    for(int k=1;k<=q;k++){
        int n,m;
        cin>>n>>m;
        vector<pair<int,ll>>g[n+1];
        for(int i=0;i<m;i++){
            int u,v;
            ll w;
            cin>>u>>v>>w;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        auto w=Dijkstra(1,n+1,g);
        cout<<"Scenario #"<<k<<":\n";
        cout<<w[n]<<'\n';
        cout<<'\n';
    }
}

