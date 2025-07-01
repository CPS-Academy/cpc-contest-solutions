#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    set<pair<int,int>>st;
    while(1){
        cin>>t;
        if(t==0){
            break;
        }
        else if(t==1){
            int k,p;
            cin>>k>>p;
            st.insert({p,k});
        }
        else if(t==3){
            if(st.size()==0)cout<<0<<'\n';
            else{
                cout<<(*st.begin()).second<<'\n';
                st.erase(st.begin());
            }
        }
        else{
            if(st.size()==0)cout<<0<<'\n';
            else{
                cout<<(*--st.end()).second<<'\n';
                st.erase(--st.end());
            }
        }
    }
}