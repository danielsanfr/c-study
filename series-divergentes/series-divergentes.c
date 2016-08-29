#include <stdio.h>

int main ()
{
	float serie = 0.0, k, n;
	scanf("%f", &k);
	while(k != -1)
	{
		if(k >= 1 && k <= 15)
		{
			for(n = 1.0 ; serie <= k ; ++n) serie += (1.0 / n);
			printf("%d\n", (int)(n - 1));
		}else printf("%d\n", 1);
		serie = 0.0;
		scanf("%f", &k);
	}
	return 0;
}
