#include <stdio.h>

int main ()
{
	int aux, a, b, c;
	scanf("%d\n%d\n%d", &a, &b, &c);
	if(a > b || a > c)
	{
		if(b < c)
		{
			aux = a;
			a = b;
			b = aux;
		}else{
			aux = a;
			a = c;
			c = aux;
		}
	}
	if(b > c)
	{
		aux = b;
		b = c;
		c = aux;
	}
	printf("%d\n%d\n%d\n", a, b, c);
	return 0;
}
