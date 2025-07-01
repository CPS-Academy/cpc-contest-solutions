#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x, n;
        scanf("%d %d", &x, &n);

        int y = n/100;

        if(n%100 != 0){
            y++;
        }

        if(x >= y){
            printf("0\n");
        }
        else {
            int extra = y-x;
            printf("%d\n", extra);
        }
    }

    return 0;
}