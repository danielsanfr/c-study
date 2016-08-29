#include <stdio.h>

int main ()
{
	int n;
	scanf("%d\n", &n);
	while(n >= 1000 && n <= 9999)
	{
		if(((n/100) + (n % 100))*((n/100) + (n % 100)) == n) printf("propriedade do 3025!\n");
		else printf("numero comum\n");
		scanf("%d\n", &n);
	}
	return 0;
}
