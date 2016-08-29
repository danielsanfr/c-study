#include <stdio.h>

int main ()
{
	int i, a, b, aux;
	scanf("%d\n%d", &a, &b);
	if(a > b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	for(i = a ; i <= b ; ++i) if((i % 2) != 0) printf("%d\n", i);
	return 0;
}
