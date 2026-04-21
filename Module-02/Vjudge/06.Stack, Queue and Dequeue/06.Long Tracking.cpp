#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n>>q;
    deque<pair<int,int>>body;
    for(int i=1;i<=n;i++){
        body.push_back({i,0});
    }
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            char c;
            cin>>c;
            int dx=0,dy=0;
            if(c=='R')dx=1;
            else if(c=='L')dx=-1;
            else if(c=='U')dy=1;
            else dy=-1;
            int x=body.front().first+dx;
            int y=body.front().second+dy;
            body.push_front({x,y});
            body.pop_back();
        }
        else{
            int k;
            cin>>k;
            k--;
            cout<<body[k].first<<" "<<body[k].second<<'\n';
        }
    }
}
