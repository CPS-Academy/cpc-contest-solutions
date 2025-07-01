#include <stdio.h>

int main(){
    int k, g, m;
    scanf("%d %d %d", &k, &g, &m);

    int x = 0;
    int y = 0;

    for(int i = 1; i <= k; i++){
        if(x == g){
            x = 0;
        }
        else if(y == 0){
            y = m;
        }
        else {
            int empty = g-x;
            if(empty >= y){
                x += y;
                y = 0;
            }
            else {
                y -= empty;
                x = g;
            }
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}