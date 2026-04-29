#include <bits/stdc++.h>
using namespace std;
#define I ios::sync_with_stdio(false); cin.tie(0);
int inf=1e9;

// template from sphere OJ, costly chess

vector<pair<pair<int,int>,int>>g[10005][2];
vector<vector<int>> Dijkstra(int src,int n){
    vector<vector<int>>dis(n,vector<int>(2,inf));
    vector<vector<bool>>pros(n,vector<bool>(2));
    dis[src][0]=0;
    dis[src][1]=0;
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>>q;
    q.push({0,{src,0}});
    q.push({0,{src,1}});
    while(q.size()){
        auto [d,u]=q.top();
        q.pop();
        if(pros[u.first][u.second])continue;
        pros[u.first][u.second]=true;
        for(auto [v,dis_u_v]:g[u.first][u.second]){
            if(dis[v.first][v.second]>dis[u.first][u.second]+dis_u_v){
                dis[v.first][v.second]=dis[u.first][u.second]+dis_u_v;
                q.push({dis[v.first][v.second],v});
            }
        }
    }
    return dis;
}
int main(){
    I
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u][0].push_back({{v,0},0});
        g[u][1].push_back({{v,0},1});
        g[v][0].push_back({{u,1},1});
        g[v][1].push_back({{u,1},0});
    }
    int s,t;
    cin>>s>>t;
    auto dis=Dijkstra(s,n+1);
    cout<<min(dis[t][0],dis[t][1])<<'\n';
}

