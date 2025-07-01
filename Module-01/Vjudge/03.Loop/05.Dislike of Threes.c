#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int k;
        scanf("%d", &k);
        
        int count = 1;
        for(int i = 1; ; i++){
            if(i%3==0){
                continue;
            }
            if(i%10==3){
                continue;
            }

            if(count==k){
                printf("%d\n", i);
                break;
            }

            count++;
        }
    }

    return 0;
}