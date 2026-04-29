#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;

//template from codeforces "Dijkstra?" problem solution

pair<vector<ll>,vector<ll>> dijkstra(int src,int n,vector<pair<int,ll>>g[]){
    vector<ll>dis(n+1,inf);
    vector<ll>p(n+1,-1);
    vector<bool>pros(n+1);
    dis[src]=0;
    p[src]=src;
    multiset<pair<ll,int>>q;
    q.insert({0,src});
    while(q.size()){
        auto [d,u]=*q.begin();
        q.erase(q.begin());
        if(pros[u])continue;
        pros[u]=true;
        for(auto [v,dis_u_v]:g[u]){
            if(dis[v]>dis[u]+dis_u_v){
                dis[v]=dis[u]+dis_u_v;
                q.insert({dis[v],v});
                p[v]=u;
            }
        }
    }
    return {dis,p};
}
int main(){
    int Q;
    cin>>Q;
    for(int k=1;k<=Q;k++){
        if(k!=1)cout<<"\n";
        cout<<"Map #"<<k<<'\n';
        ll n,m;
        cin>>n;
        vector<pair<string,ll>>station;
        map<string,int>mp;
        for(int i=0;i<n;i++){
            string s;
            ll w;
            cin>>s>>w;
            station.push_back({s,w});
            mp[s]=i;
        }
        cin>>m;
        vector<pair<int,ll>>g[n];
        for(int i=0;i<m;i++){
            int w;
            string u,v;
            cin>>u>>v>>w;
            g[mp[u]].push_back({mp[v],w*2+station[mp[v]].second});
            g[mp[v]].push_back({mp[u],w*2+station[mp[u]].second});
        }
        
        int q;
        cin>>q;
        for(int k=1;k<=q;k++){
            cout<<"Query #"<<k<<'\n';
            string s,t;
            int passenger;
            cin>>s>>t>>passenger;
            auto [dis,par]=dijkstra(mp[s],n,g);
            
            vector<ll>path={mp[t]};
            int x=par[mp[t]];
            while(x!=mp[s]){
                path.push_back(x);
                x=par[x];
            }
            path.push_back(mp[s]);
            reverse(path.begin(),path.end());
            for(int i=0;i<path.size();i++){
                if(i!=0)cout<<" ";
                cout<<station[path[i]].first;
            }
            double cost=dis[mp[t]]+station[mp[s]].second;
            cost+=cost/10;
            cout<<"\nEach passenger has to pay : "<<fixed<<setprecision(2)<<cost/passenger<<" taka\n";
            
        }
    }
        
}

