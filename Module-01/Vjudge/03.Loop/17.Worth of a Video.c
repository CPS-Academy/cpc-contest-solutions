#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int s;
        scanf("%d", &s);

        int frames = s*24;
        int words = frames*1000;

        printf("%d\n", words);
    }

    return 0;
}