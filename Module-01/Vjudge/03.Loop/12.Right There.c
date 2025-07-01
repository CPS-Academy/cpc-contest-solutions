#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, x;
        scanf("%d %d", &n, &x);

        if(n > x){
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }

    return 0;
}