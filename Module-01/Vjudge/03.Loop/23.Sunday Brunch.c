#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);

        int p = x/y;

        if(p > 20){
            p = 20;
        }

        printf("%d\n", p);
    }

    return 0;
}