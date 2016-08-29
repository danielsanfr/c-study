#include <stdio.h>

int main ()
{
	int i, num[3] = {}, menor = 10000000;
	scanf("%d\n%d\n%d", &num[0], &num[1], &num[2]);
	for(i = 0 ; i < 3 ; ++i) if(num[i] < menor) menor = num[i];
	printf("%d\n", menor);	
	return 0;
}
