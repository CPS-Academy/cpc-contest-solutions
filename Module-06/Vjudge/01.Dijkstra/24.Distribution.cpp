#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
vector<ll> Dijkstra(int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n,inf);
    vector<bool>pros(n);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>>q;
    for(int i=0;i<n;i++){
        ll t;
        cin>>t;
        dis[i]=t;
        q.push({t,i});
    }
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
    int n;
    cin>>n;
    vector<pair<int,ll>>g[n];
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        g[i].push_back({(i+1)%n,x});
    }
    auto dis=Dijkstra(n,g);
    for(auto x:dis){
        cout<<x<<'\n';
    }
}

