#include <stdio.h>

int main(){
    int n, x;
    scanf("%d %d", &n, &x);

    int sum = 0;

    for(int i = 1; i <= n; i++){
        int s;
        scanf("%d", &s);

        if(s <= x){
            sum += s;
        }
    }

    printf("%d\n", sum);

    return 0;
}