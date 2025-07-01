#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        multiset<pair<int,int>>st;
        while(n--){
            int x,y;
            scanf("%d%d",&x,&y);
            st.insert({x,-y});
        }
        for(auto [x,y]:st){
            printf("%d %d\n",x,-y);
        }
    }    
}