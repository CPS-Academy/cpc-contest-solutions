#include <bits/stdc++.h>
using namespace std;
#define I ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
ll inf=1e18;

//Templete from UVA OJ "Cheapest way" + Codeforces "Dijkstra?"

pair<vector<ll>,vector<ll>> dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n,inf);
    vector<ll>p(n,-1);
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
                p[v]=u;
            }
        }
    }
    return {dis,p};
}

vector<ll> path_calc(vector<ll> par,ll last){
    vector<ll>path;
    int x=last;
    while(x!=-1){
        path.push_back(x);
        x=par[x];
    }
    reverse(path.begin(),path.end());
    return path;
}
int main(){
    I
    int n,m;
    cin>>n>>m;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<pair<int,ll>>g[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        ll cost;
        if(a[u]==a[v])cost=0;
        else{
            cost=1;
            if(u%2==0)cost=2;
        }
        g[u].push_back({v,cost});
        if(a[v]==a[u])cost=0;
        else{
            cost=1;
            if(v%2==0)cost=2;
        }
        g[v].push_back({u,cost});
    }

    auto [dis,par]=dijkstra(1,n+1,g);
    if(dis[n]==inf){
        cout<<"impossible\n";
        return 0;
    }
    cout<<dis[n]<<" ";
    auto path=path_calc(par,n);
    cout<<path.size()<<"\n";
    for(auto x:path){
        cout<<x<<" ";
    }
    cout<<'\n';
    return 0;
}

