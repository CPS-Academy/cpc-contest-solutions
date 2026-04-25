#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char>l,r;
    for(auto c:s){
        if(c=='L'){
            if(l.size()){
                r.push(l.top());
                l.pop();
            }
        }
        else if(c=='R'){
            if(r.size()){
                l.push(r.top());
                r.pop();
            }
        }
        else{
            l.push(c);
        }
    }
    while(l.size()){
        r.push(l.top());
        l.pop();
    }
    while(r.size()){
        cout<<r.top();
        r.pop();
    }
}
