#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int>st;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(st.count(a[i])==0){
            ans.push_back(a[i]);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<'\n';
}