#include<stdio.h>

int main() {

    int n;
    scanf("%d", & n);

    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", & arr[i]);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= arr[i]; j++) {
            int flag = 1;
            int lastdigit = i % 10;
            int i2 = i;
            while (i2 != 0) {
                int lastnow = i2 % 10;
                if (lastnow != lastdigit) {
                    flag = 0;
                    break;
                }
                i2 /= 10;
            }

            int j2 = j;
            while (j2 != 0) {
                int lastnow = j2 % 10;
                if (lastnow != lastdigit) {
                    flag = 0;
                    break;
                }
                j2 /= 10;
            }
            if (flag == 1) {
                ans++;
            }

        }
    }

    printf("%d\n", ans);

    return 0;
}