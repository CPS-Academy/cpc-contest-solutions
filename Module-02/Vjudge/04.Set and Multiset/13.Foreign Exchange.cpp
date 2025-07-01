#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        multiset<pair<int,int>>st;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            auto it=st.find({y,x});
            if(it==st.end()){
                st.insert({x,y});
            }
            else{
                st.erase(it);
            }
        }
        if(st.size()==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}