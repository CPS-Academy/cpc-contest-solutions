#include <bits/stdc++.h>
using namespace std;
#define I ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
ll inf=1e9;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
vector<vector<int>> Dijkstra(int srcx,int srcy,int n,int m,vector<vector<vector<pair<pair<int,int>,int>>>>g){
    vector<vector<int>>dis(n,vector<int>(m,inf));
    vector<vector<bool>>pros(n,vector<bool>(m));
    dis[srcx][srcy]=0;
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>>q;;
    q.push({0,{srcx,srcy}});
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
    int q;
    cin>>q;
    while(q--){
        ll x,y,n,m;
        cin>>n>>m>>x>>y;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        vector<vector<vector<pair<pair<int,int>,int>>>>g_for_flash(n,vector<vector<pair<pair<int,int>,int>>>(m)),g_for_rev_flash;
        g_for_rev_flash=g_for_flash;
        for(int a=0;a<n;a++){
            for(int b=0;b<m;b++){
                for(int k=0;k<4;k++){
                    int c=a+dx[k];
                    int d=b+dy[k];
                    if(c>=0&&c<n&&d>=0&&d<m){
                        int time_for_flash,time_for_rev_flash;
                        if(arr[a][b]%2==arr[c][d]%2){
                            time_for_flash=0;
                            time_for_rev_flash=y;
                        }
                        else{
                            time_for_flash=x;
                            time_for_rev_flash=0;
                        }
                        g_for_flash[a][b].push_back({{c,d},time_for_flash});
                        g_for_rev_flash[a][b].push_back({{c,d},time_for_rev_flash});
                    }
                }
            }
        }
        auto ans_for_flash=Dijkstra(0,0,n,m,g_for_flash);
        auto ans_for_rev_flash=Dijkstra(0,0,n,m,g_for_rev_flash);
        if(ans_for_flash[n-1][m-1]<ans_for_rev_flash[n-1][m-1])cout<<"YES\n";
        else cout<<"NO\n";
    }
}
 