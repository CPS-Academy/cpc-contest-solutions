#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        int x = n-(k-1);
        int y = n-2*(k-1);

        if(x >= 1 && x%2 == 1){
            printf("YES\n");
            for(int i = 1; i <= k-1; i++){
                printf("1 ");
            }
            printf("%d\n", x);
        }
        else if(y >= 1 && y%2 == 0){
            printf("YES\n");
            for(int i = 1; i <= k-1; i++){
                printf("2 ");
            }
            printf("%d\n", y);
        }
        else {
            printf("NO\n");
        }
    }


    return 0;
}