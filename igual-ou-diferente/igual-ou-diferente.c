#include <stdio.h>

int main ()
{
	int a, b, c;
	scanf("%d\n%d\n%d", &a, &b, &c);
	if(a == b && b == c) printf("1\n");
	else if(a != b && a != c && b != c) printf("2\n");
	else printf("3\n");
	return 0;
}
