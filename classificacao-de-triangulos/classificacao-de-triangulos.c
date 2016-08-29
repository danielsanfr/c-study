#include <stdio.h>

int main ()
{
	float a, b, c;
	scanf("%f\n%f\n%f", &a, &b, &c);
	if(a == b && b == c && a == c) printf("equilatero\n");
	else if(a == b || b == c || a == c) printf("isosceles\n");
	else printf("escaleno\n");
	return 0;
}
