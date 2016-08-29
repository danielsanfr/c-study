#include <stdio.h>

int main ()
{
	int a, b, c;
	scanf("%d", &c);
	a = (int) c/3600;
	c = c - a*3600;
	b = (int) c/60;
	c = c - b*60;
	printf("%d h %d m %d s\n", a, b, c);
	return 0;
}
