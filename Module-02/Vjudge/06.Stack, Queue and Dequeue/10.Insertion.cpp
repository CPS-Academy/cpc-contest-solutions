#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    string tmp;
    for(auto x:s){
        if(x=='('){
            st.push(x);
        }
        else{
            if(st.size()){
                st.pop();
            }
            else{
                tmp+='(';
            }
        }
    }
    s=tmp+s;
    int cnt=0;
    for(auto x:s){
        if(x=='(')cnt++;
        else cnt--;
    }
    while(cnt--)s+=')';
    cout<<s<<'\n';
}
