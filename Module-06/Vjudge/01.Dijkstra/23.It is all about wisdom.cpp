#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
//templete from SphereOJ "Travelling cost"
vector<ll> Dijkstra(int src,int n,ll wisdom,vector<pair<int,pair<ll,ll>>>g[]){
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
        for(auto [v,tmp]:g[u]){
            auto [dis_u_v,w]=tmp;
            if(w>wisdom)continue;
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
        int n,m;
        ll k;
        cin>>n>>m>>k;
        vector<pair<int,pair<ll,ll>>>g[n+1];
        for(int i=0;i<m;i++){
            int u,v;
            ll cost,w;
            cin>>u>>v>>cost>>w;
            g[u].push_back({v,{cost,w}});
            g[v].push_back({u,{cost,w}});
        }
        ll hi=1e9,lo=1;
        ll ans=-1;
        while(hi>=lo){
            ll mid=(hi+lo)/2;
            auto dis=Dijkstra(1,n+1,mid,g);
            if(dis[n]<k){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<ans<<'\n';
    }
}

