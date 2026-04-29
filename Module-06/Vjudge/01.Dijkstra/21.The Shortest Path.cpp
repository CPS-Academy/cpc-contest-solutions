#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;

//Templete from SphereOJ Travelling cost

vector<ll> Dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n+1,inf);
    vector<bool>pros(n+1);
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
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<pair<int,ll>>g[n+1];
        map<string,int>cityNameToIndex;
        for(int i=1;i<=n;i++){
            string cityName;
            cin>>cityName;
            cityNameToIndex[cityName]=i;
            int m;
            cin>>m;
            while(m--){
                int v,w;
                cin>>v>>w;
                g[i].push_back({v,w});
            }
        }
        int q;
        cin>>q;
        while(q--){
            string s,t;
            cin>>s>>t;
            auto dis=Dijkstra(cityNameToIndex[s],n+1,g);
            cout<<dis[cityNameToIndex[t]]<<'\n';
        }
    }
}

