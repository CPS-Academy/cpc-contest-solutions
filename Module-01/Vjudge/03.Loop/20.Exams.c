#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int total = x*y;

        // if(z*2 > total){
        //     printf("YES\n");
        // }
        // else {
        //     printf("NO\n");
        // }

        int more_than_half = total/2 + 1;

        if(z >= more_than_half){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}