#include<stdio.h>


int main() {

    int code;
    scanf("%d", & code);

    if (code == 404) {
        printf("NOT FOUND\n");
    } else {
        printf("FOUND\n");
    }

    return 0;
}