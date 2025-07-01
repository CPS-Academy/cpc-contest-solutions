#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    set<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    int ans=0;
    for(auto y:st){
        ans+=st.count(y-k);
    }
    cout<<ans<<'\n';
}