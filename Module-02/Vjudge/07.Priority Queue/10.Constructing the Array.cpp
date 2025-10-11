#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n+1);
        priority_queue<pair<int,int>>q;
        q.push({n,-1});
        int i=1;
        while(q.size()){
            auto [sz,l]=q.top();
            q.pop();
            l=-l;
            int r=l+sz-1;
            int cur;
            if(sz%2){
                cur=(l+r)/2;
            }
            else{
                cur=(r+l-1)/2;
            }
            ans[cur]=i;
            i++;
            if(cur-l)q.push({cur-l,-l});
            if(r-cur)q.push({r-cur,-(cur+1)});
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
    }
}