#include <stdio.h>

int main()
{
	int aux = 97,i, k = 0, n;
	int frase_aux[200];
	char letra, frase[200];
	scanf("%d", &n);
	getchar();
	for( ; n > 0 ; --n)
	{
		scanf("%c", &letra);
		while(letra != '\n')
		{
			frase[k] = letra;
			for(i = 0 ; i < k ; ++i)
			{
				if(letra == frase[i])
				{
					printf("%c", (char)frase_aux[i]);
					frase_aux[k] = frase_aux[i];
					break;
				}
			}
			if(i == k)
			{
				printf("%c", (char)aux);
				frase_aux[k] = aux;
				++aux;
			}
			++k;
			scanf("%c", &letra);
		}
		printf("\n");
		k = 0 ; aux = 97;
	}
	return 0;
}
