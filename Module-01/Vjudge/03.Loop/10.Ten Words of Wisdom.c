#include <stdio.h>
#include <limits.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int max_quality = INT_MIN;
        int response_number = 0;

        for(int i = 1; i <= n; i++){
            int length, quality;
            scanf("%d %d", &length, &quality);

            if(length > 10){
                continue;
            }

            if(quality > max_quality){
                max_quality = quality;
                response_number = i;
            }
        }

        printf("%d\n", response_number);
    }

    return 0;
}