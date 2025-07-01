#include<iostream>
#include<string>
#include<sstream>
#include <set>
using namespace std;
int main(){
    while(1){
        string tmp;
        getline(cin,tmp);
        if(tmp=="#")break;
        stringstream ss(tmp);
        string word;
        set<string>st;
        while(ss>>word){
            st.insert(word);
        }
        cout<<st.size()<<'\n';
    }
}