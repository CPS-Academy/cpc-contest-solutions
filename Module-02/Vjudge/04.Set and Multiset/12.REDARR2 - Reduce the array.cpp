#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans=0;
        multiset<long long>st;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            st.insert(x);
        }
        while(st.size()>1){
            long long x=*st.begin();
            st.erase(st.begin());
            long long y=*st.begin();
            st.erase(st.begin());
            ans+=x+y;
            st.insert(x+y);
        }
        cout<<ans<<'\n';
    }
}