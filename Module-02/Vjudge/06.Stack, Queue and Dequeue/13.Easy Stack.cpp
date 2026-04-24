#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    int n;
    scanf("%d",&n);
    while(n--){
        int k;
        scanf("%d",&k);
        if(k==1){
            int x;
            scanf("%d",&x);
            st.push(x);
        }
        else if(k==2){
            if(st.size()){
                st.pop();
            }
        }
        else{
            if(st.size()){
                printf("%d\n",st.top());
            }
            else{
                printf("Empty!\n");
            }
        }
    }
}
