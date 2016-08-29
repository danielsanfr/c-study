#include <stdio.h>

int main ()
{
	int a, b, c;
	scanf("%d\n%d\n%d", &a, &b, &c);
	if((b > a && a > c) || (b < a && a < c)) printf("%d\n", a);
	if((a > b && b > c) || (a < b && b < c)) printf("%d\n", b);
	if((a > c && c > b) || (a < c && c < b)) printf("%d\n", c);
	return 0;
}
