#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    if(st.size()<2){
        cout<<"NO\n";
    }
    else{
        st.erase(st.begin());
        cout<<*st.begin()<<'\n';
    }
}