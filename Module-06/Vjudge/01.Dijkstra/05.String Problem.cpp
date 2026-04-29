#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
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
    string s,t;
    cin>>s>>t;
    ll m;
    cin>>m;
    vector<pair<int,ll>>g[26];
    for(int i=0;i<m;i++){
        int w;
        char u,v;
        cin>>u>>v>>w;
        g[u-'a'].push_back({v-'a',w});
    }
    if(s.size()!=t.size()){
        cout<<-1<<'\n';
        return 0;
    }
    vector<vector<ll>>ans;
    for(int i=0;i<26;i++){
        ans.push_back({Dijkstra(i,26,g)}); //ans[2][j] c->a+'j' cost
    }
    ll cost=0;
    string ans_s;
    ll n=s.size();
    for(int i=0;i<n;i++){
        ll mn=inf;
        char mn_c='A';
        for(int j=0;j<26;j++){
            if(mn>ans[s[i]-'a'][j]+ans[t[i]-'a'][j]){
                mn=ans[s[i]-'a'][j]+ans[t[i]-'a'][j];
                mn_c='a'+j;
            }
        }
        if(mn_c=='A'){
            cout<<-1<<'\n';
            return 0;
        }
        cost+=mn;
        ans_s+=mn_c;
    }
    cout<<cost<<'\n';
    cout<<ans_s<<'\n';
}

