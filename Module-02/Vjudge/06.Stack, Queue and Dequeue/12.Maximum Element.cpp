#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    stack<pair<int,int>> st;
    st.push({0,0});
    while(t--){
        int k;
        cin>>k;
        if(k==1){
            int x;
            cin>>x;
            int mx=max(x,st.top().second);
            st.push({x,mx});
        }
        else if(k==2){
            st.pop();
        }
        else{
            cout<<st.top().second<<'\n';
        }
    }
}
