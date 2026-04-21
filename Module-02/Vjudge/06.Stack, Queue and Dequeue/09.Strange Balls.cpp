#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    stack<pair<int,int>>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans++;
        if(st.size()==0){
            st.push({x,1});
            cout<<ans<<'\n';
            continue;
        }
        auto [y,cnt]=st.top();
        if(y==x){
            st.pop();
            cnt++;
            if(cnt!=x){
                st.push({x,cnt});
            }
            else{
                ans-=x;
            }
        }
        else{
            st.push({x,1});
        }
        cout<<ans<<'\n';
    }
}
