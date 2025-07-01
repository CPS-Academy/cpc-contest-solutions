#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char>st;
    for(auto x:s){
        st.insert(x);
    }
    if(st.size()==s.size()){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
}