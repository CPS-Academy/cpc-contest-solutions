#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n+=n;
    set<int>st;
    int ans=0;
    while(n--){
        int x;
        cin>>x;
        if(st.count(x)){
            st.erase(x);
        }
        else{
            st.insert(x);
        }
        if(st.size()>ans)ans=st.size();
    }
    cout<<ans<<'\n';
}