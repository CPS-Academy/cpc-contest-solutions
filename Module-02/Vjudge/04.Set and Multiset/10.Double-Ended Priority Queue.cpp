#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    multiset<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    while(q--){
        int t;
        cin>>t;
        if(t==0){
            int x;
            cin>>x;
            st.insert(x);
        }
        else if(t==1){
            cout<<*st.begin()<<"\n";
            st.erase(st.begin());
        }
        else{
            cout<<*(--st.end())<<'\n';
            st.erase(--st.end());
        }
    }
}