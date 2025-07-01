#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x;
        scanf("%d", &x);

        int ans = 500/x;

        if(500%x != 0){
            ans++;
        }

        printf("%d\n", ans);
    }

    return 0;
}