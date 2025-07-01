#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x;
        scanf("%d", &x);

        if(x > 24){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}