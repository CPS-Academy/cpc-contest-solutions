#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char>st;
        int ans=1;
        for(auto x:s){
            if(x=='('||x=='{'||x=='['){
                st.push(x);
            }
            else{
                if(st.size()==0){
                    ans=0;
                    break;
                }
                char c=st.top();
                if(c=='('){
                    if(x!=')')ans=0;
                }
                if(c=='{'){
                    if(x!='}')ans=0;
                }
                if(c=='['){
                    if(x!=']')ans=0;
                }
                st.pop();
            }
        }
        if(st.size())ans=0;
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
