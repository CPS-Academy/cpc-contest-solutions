#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    for(auto ch:s){
        st.insert(tolower(ch));
    }
    if(st.size()==26)cout<<"YES\n";
    else cout<<"NO\n";
}