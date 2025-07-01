#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,m;
    while(cin>>n){
        cin>>m;
        set<int>st;
        int x;
        while(n--){
            cin>>x;
            st.insert(x);
        }
        while(m--){
            cin>>x;
            st.insert(x);
        }
        for(auto x:st){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}