#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
	double n, r, peri;
	double l;
	scanf("%lf%lf", &n, &r);
	l = 2*r*sin(PI/n);
	peri = l*n;
	printf("%.2lf\n", peri);
	return 0;
}
