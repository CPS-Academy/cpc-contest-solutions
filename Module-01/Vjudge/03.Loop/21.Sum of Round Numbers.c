#include <stdio.h>
#include <limits.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int count = 0;
        
        int m = n;
        while(m > 0){
            int last_digit = m%10;
            m /= 10;

            if(last_digit > 0){
                count++;
            }
        }

        printf("%d\n", count);

        int p = 1;

        while(n > 0){
            int last_digit = n%10;
            n /= 10;

            if(last_digit != 0){
                printf("%d ", last_digit * p);
            }

            p *= 10;
        }
        printf("\n");
    }

    return 0;
}