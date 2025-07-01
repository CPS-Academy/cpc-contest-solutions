#include<stdio.h>

int main() {

    int t;
    scanf("%d", & t);

    while (t--) {
        int n;
        scanf("%d", & n);

        int arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", & arr[i]);
            sum += arr[i];
        }

        long long a = round(sqrt(sum * 1.0));
        if (a * a == sum) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}