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
    I
    int n,m,q;
    cin>>n>>m>>q;
    vector<pair<int,ll>>g[n];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    ll ans_mx[n]={0},ans_cnt[n]={0};
    while(q--){
        int s;
        cin>>s;
        if(ans_cnt[s]){
            cout<<ans_mx[s]<<" "<<ans_cnt[s]<<'\n';
            continue;
        }
        auto dis=Dijkstra(s,n,g);
        ll mx=-1,cnt=0;
        for(int i=0;i<n;i++){
            if(dis[i]==inf)continue;
            if(mx<dis[i]){
                mx=dis[i];
                cnt=1;
            }
            else if(mx==dis[i]){
                cnt++;
            }
        }
        cout<<mx<<" "<<cnt<<'\n';
        ans_mx[s]=mx;
        ans_cnt[s]=cnt;
    }
}

