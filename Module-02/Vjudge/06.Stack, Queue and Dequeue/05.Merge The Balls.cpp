#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    stack<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
        while(st.size()>1){
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            if(x!=y){
                st.push(y);
                st.push(x);
                break;
            }
            else{
                st.push(x+1);
            }
        }
    }
    cout<<st.size();
}
