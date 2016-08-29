#include <stdio.h>

int main ()
{
	int a, b, i;
	scanf("%d %d", &a, &b);
	if(a > b)
	{
		i = a;
		a = b;
		b = a;
	}
	for(i = a ; i <= b ; ++i)
	{
		if(i % 5 == 0)
		{
			if(b - i < 5) printf("%d\n", i);
			else printf("%d|", i);
		}
	}
	return 0;
}
