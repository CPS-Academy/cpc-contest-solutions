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
    int k,q;
    cin>>q;
    for(int k=1;k<=q;k++){
        int n;
        cin>>n;
        vector<pair<int,ll>>g[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int w;
                cin>>w;
                g[i].push_back({j,w});
            }
        }
        vector<vector<ll>>ans;
        for(int i=0;i<n;i++){
            ans.push_back(Dijkstra(i,n,g));
        }
        int r;
        cin>>r;
        ll cost=0;
        while(r--){
            int s,d;
            cin>>s>>d;
            cost+=ans[s-1][d-1];
        }
        cout<<"Case #"<<k<<": "<<cost<<'\n';
    }
}

