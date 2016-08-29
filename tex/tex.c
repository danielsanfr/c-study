#include <stdio.h>
#include <string.h>

int main ()
{
	int i, tam, tipo;
	char frase[10000];
	gets(frase);
	while(frase[0] != '_')
	{
		tam = strlen(frase);
		for(i = 0 ; i < tam ; ++i)
		{
			if(i == 0 && frase[i] == '+')
			{
				printf("*");
				tipo = 0;
			}else if(i == (tam - 1) && frase[i] == '+')
			{
				printf("#\n");
				tipo = 1;
			}else if(i == (tam - 1)) printf("%c\n", frase[i]);
			else if(frase[i] == '+')
			{
				if(tipo == 0)
				{
					printf("#");
					tipo = 1;
				}else if (tipo == 1)
				{
					printf("*");
					tipo = 0;
				}
			}else if(frase[i] == ' ') printf(" ");
			else printf("%c", frase[i]);
		}
		gets(frase);
	}
	return 0;
}
