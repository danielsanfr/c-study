#include <stdio.h>

int main ()
{
	float a, b, c, media;
	scanf("%f\n%f\n%f", &a, &b, &c);
	media = (a + b + c)/3;
	if(media >= 7) printf("aprovado\n");
	else if(media >= 3 && media < 7) printf("prova final\n");
	else printf("reprovado");
	return 0;
}
