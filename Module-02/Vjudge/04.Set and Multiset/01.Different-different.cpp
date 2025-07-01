#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    set<int>st;
    while(n--){
        int x;
        scanf("%d",&x);
        st.insert(x);
    }
    cout<<st.size()<<'\n';
}