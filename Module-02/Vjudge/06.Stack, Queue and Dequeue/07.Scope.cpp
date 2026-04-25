#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char>found_char;
    stack<string>each_good_sec;
    string cur;
    int ans=1;
    for(auto x:s){
        if(x=='('){
            each_good_sec.push(cur);
            cur="";
        }
        else if(x==')'){
            for(auto y:cur){
                found_char.erase(y);
            }
            cur=each_good_sec.top();
            each_good_sec.pop();
        }
        else{
            if(found_char.count(x)){
                ans=0;
                break;
            }
            found_char.insert(x);
            cur+=x;
        }
    }
    if(ans)cout<<"Yes\n";
    else cout<<"No\n";
}
