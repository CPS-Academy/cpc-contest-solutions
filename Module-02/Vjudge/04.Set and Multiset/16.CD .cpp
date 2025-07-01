#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0){
            return 0;
        }
        set<int>st;
        while(n--){
            int x;
            cin>>x;
            st.insert(x);
        }
        int ans=0;
        while(m--){
            int x;
            cin>>x;
            ans+=st.count(x);
        }
        cout<<ans<<'\n';
    }
}