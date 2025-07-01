#include<stdio.h>

int main() {

    int arr[8];

    for (int i = 0; i < 8; i++) {
        scanf("%d", & arr[i]);
    }

    int flag = 1;

    for (int i = 0; i < 8; i++) {
        if (arr[i] < 100 || arr[i] > 675) {
            flag = 0;
            break;
        }
    }

    for (int i = 0; i < 8; i++) {
        if (arr[i] % 25 != 0) {
            flag = 0;
            break;
        }
    }

    for (int i = 0; i < 7; i++) {
        if (arr[i] > arr[i + 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) printf("Yes\n");
    else printf("No\n");

    return 0;
}