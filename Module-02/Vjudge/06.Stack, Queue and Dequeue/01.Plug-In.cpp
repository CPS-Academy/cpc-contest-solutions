#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    stack<char>st;
    for(auto x:s){
        if(st.size()==0||st.top()!=x){
            st.push(x);
        }
        else{
            st.pop();
        }
    }
    string ans;
    while(st.size()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<'\n';
}
