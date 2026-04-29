#include <bits/stdc++.h>
using namespace std;
#define I ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
ll inf=1e9;
int dx[]={2,2,-2,-2,1,1,-1,-1};
int dy[]={1,-1,1,-1,2,-2,2,-2};
vector<pair<pair<int,int>,int>>g[8][8];
vector<vector<int>> Dijkstra(int srcx,int srcy){
    vector<vector<int>>dis(8,vector<int>(8,inf));
    vector<vector<bool>>pros(8,vector<bool>(8));
    dis[srcx][srcy]=0;
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>>q;
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
    for(int a=0;a<8;a++){
        for(int b=0;b<8;b++){
            for(int k=0;k<8;k++){
                int c=a+dx[k];
                int d=b+dy[k];
                if(c>=0&&c<8&&d>=0&&d<8){
                    g[a][b].push_back({{c,d},a*c+b*d});
                }
            }
        }
    }
    vector<vector<int>>ans[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            ans[i][j]=Dijkstra(i,j);
        }
    }
    int sx,sy,ex,ey;
    while(cin>>sx>>sy>>ex>>ey){
        cout<<ans[sx][sy][ex][ey]<<'\n';
    }
}

