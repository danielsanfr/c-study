#include <stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	if(n % 10 != 0 && n % (n / 10) == 0) printf("SIM\n");
	else printf("NAO\n");
	return 0;
}
