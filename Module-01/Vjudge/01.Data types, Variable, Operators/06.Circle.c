#include <stdio.h>
#include <math.h>
int main () {
	double pi = acos(-1);
	double r;
	scanf("%lf", &r);

	double area = pi * r * r;
	double circ = 2 * pi * r;
	printf("%.6lf %.6lf\n", area, circ);
    return 0;
}
