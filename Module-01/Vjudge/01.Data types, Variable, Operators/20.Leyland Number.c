#include <stdio.h>
#include <math.h>
int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	int result = pow(a, b) + pow(b, a);
	printf("%d\n", result);
    return 0;
}
