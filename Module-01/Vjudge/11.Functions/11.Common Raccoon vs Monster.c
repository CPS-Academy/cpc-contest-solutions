#include<stdio.h>

int sum(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    return s;
}
int main() {
    int h, n;
    scanf("%d%d", & h, & n);
    int a[n], i;
    for (i = 0; i < n; i++) {
        scanf("%d", & a[i]);
    }
    int d = sum(a, n);
    if (d < h) printf("No\n");
    else printf("Yes\n");
}
