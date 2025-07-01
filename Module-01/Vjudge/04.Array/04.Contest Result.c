#include<stdio.h>

int main() {

    int n, m;
    scanf("%d%d", & n, & m);

    int A[n], B[m];

    for (int i = 0; i < n; i++) {
        scanf("%d", & A[i]);
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", & B[i]);
    }

    int sum = 0;

    for (int i = 0; i < m; i++) {
        int ind = B[i] - 1;
        sum += A[ind];
    }

    printf("%d\n", sum);
    return 0;
}