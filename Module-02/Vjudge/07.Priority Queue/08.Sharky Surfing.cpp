#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,L;
        cin>>n>>m>>L;
        vector<pair<int,int>>a,b;
        for(int i=0;i<n;i++){
            int r,l;
            cin>>l>>r;
            a.push_back({l,r-l+2});
        }
        for(int i=0;i<m;i++){
            int x,v;
            cin>>x>>v;
            b.push_back({x,v});
        }
        priority_queue<int>q;
        int j=0,k=1,ans=0;
        for(int i=0;i<n;i++){
            while(j<m&&b[j].first<a[i].first){
                q.push(b[j].second);
                j++;
            }
            while(k<a[i].second){
                if(!q.size()){
                    ans=-1;
                    break;
                }
                k+=q.top();
                q.pop();
                ans++;
            }
            if(ans==-1)break;
        }
        cout<<ans<<'\n';
    }
}