#include <stdio.h>

int main ()
{
	int a, b, c, d;
	scanf("%d/%d + %d/%d", &a, &b, &c, &d);
	if(b == 0 || d == 0) printf("entrada invalida!\n");
	else
	{
		if((b % d == 0) || (d % b == 0))
		{
			if (b > d) printf("%d/%d\n", (((b/b)*a) + ((b/d)*c)), b);
			else printf("%d/%d\n", (((d/b)*a) + ((d/d)*c)), d);
		}
		else printf("%d/%d\n", (a*d + c*b), (b*d));
	}
	return 0;
}
