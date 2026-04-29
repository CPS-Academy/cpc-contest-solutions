#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
int inf=1e9;
vector<pair<int,int>>g[1000005];
int N, U, D, I, J, L;
int cnt_node=1000000;
vector<int> Dijkstra(int src,int n,vector<pair<int,int>>g[]){
    vector<int>dis(n+1,inf);
    vector<bool>pros(n+1);
    dis[src]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>q;
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
        int v=u+1;
        if(v<=1000000&&dis[v]>dis[u]+U){
            dis[v]=dis[u]+U;
            q.push({dis[v],v});
        }
        v=u-1;
        if(v>0&&dis[v]>dis[u]+D){
            dis[v]=dis[u]+D;
            q.push({dis[v],v});
        }
    }
    return dis;
}
int main(){
    fast;
    cin>>N>>U>>D>>I>>J>>L;
    while(L--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x:a)cin>>x;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                g[a[i]].push_back({a[j],I+J});
                g[a[j]].push_back({a[i],I+J});
            }
        }
    }
    auto dis=Dijkstra(1,cnt_node,g);
    cout<<dis[N]<<'\n';
}

