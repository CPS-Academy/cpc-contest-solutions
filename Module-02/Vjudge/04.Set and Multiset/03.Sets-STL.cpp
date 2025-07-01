#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    set<int>st;
    while(t--){
        int y,x;
        cin>>y>>x;
        if(y==1){
            st.insert(x);
        }
        else if(y==2){
            st.erase(x);
        }
        else{
            if(st.count(x))cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}