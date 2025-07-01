#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x;
        scanf("%d", &x);

        int y = x-10;

        printf("%d\n", y);
    }

    return 0;
}