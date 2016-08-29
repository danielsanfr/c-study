#include <stdio.h>

int main ()
{
	int i;
	char num[3];
	scanf("%s", num);
	for(i = 2 ; i >= 0 ; --i) printf("%c", num[i]);
	printf("\n");
	return 0;
}
