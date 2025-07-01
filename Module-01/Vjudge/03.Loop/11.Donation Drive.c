#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, x;
        scanf("%d %d", &n, &x);

        int rem = n-x;

        printf("%d\n", rem);
    }

    return 0;
}