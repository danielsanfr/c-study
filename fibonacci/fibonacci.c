#include <stdio.h>

int main ()
{
	int a, af, f, i, n;
	scanf("%d\n", &n);
	while (n != 0)
	{
		af = 0;
		f = 1;
		if(n == 1) printf("0\n");
		else if(n == 2) printf("0 1\n");
		else if(n > 2)
		{
			printf("0 1 ");
			for(i = 2 ; i < n ; ++i)
			{
				a = f + af;
				if(i < (n-1)) printf("%d ", a);
				else printf("%d\n", a);
				af = f;
				f = a;
			}
		}
		scanf("%d\n", &n);
	}
	return 0;
}
