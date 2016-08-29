#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main ()
{
	char frase[75];//, aux[75];
	int i, tam;
	gets(frase);
	while(strcmp(frase, "the end!"))
	{
		tam = strlen(frase);
		for(i = 0 ; i < tam ; ++i)
		{
			if(i == (tam - 1))
			{
//				gets(aux);
//				if(strcmp(aux, "the end!")) printf("%c\n", toupper(frase[i]));
//				else
				printf("%c\n", toupper(frase[i]));
			}else printf("%c", toupper(frase[i]));
		}
		gets(frase);
//		strcpy(frase, aux);
		//for(i = 0 ; i < 76 ; ++i) frase[i] = aux[i];
	}                              
	return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main ()
{
	char frase[76];
	char*  aux;
	int i, tam;
	gets(frase);
	while(strcmp(frase, "the end!"))
	{
		tam = strlen(frase);
		for(i = 0 ; i <= tam ; ++i)
		{
			if(i == (tam - 1))
			{
				aux = (char*) malloc(sizeof(char)*76);
				gets(aux);
				if(strcmp(aux, "the end!")) printf("%c\n", toupper(frase[i]));
				else printf("%c", toupper(frase[i]));
			}else printf("%c", toupper(frase[i]));
		}
		for(i = 0 ; i < 76 ; ++i) frase[i] = aux[i];
		free(aux);
	}                              
	return 0;
}*/
