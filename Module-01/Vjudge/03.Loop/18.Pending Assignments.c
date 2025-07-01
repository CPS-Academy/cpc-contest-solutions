#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int total = z*24*60;
        int req = x*y;

        if(total >= req){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}