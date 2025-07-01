#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        set<pair<int,int>>st;
        st.insert({-n,0});
        int i=0;
        while(st.size()){
            auto [x,y]=*st.begin();
            st.erase(st.begin());
            i++;
            x=-x;
            if(x%2){
                a[y+x/2]=i;
                int sz=x/2;
                if(sz==0)continue;
                st.insert({-sz,y});
                st.insert({-sz,y+x/2+1});
            }
            else{
                a[y+x/2-1]=i;
                int sz=x/2;
                st.insert({-sz,y+x/2});
                sz--;
                if(sz==0)continue;
                st.insert({-sz,y});
            }
        }
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<'\n';
    }
}