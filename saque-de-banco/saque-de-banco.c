#include <stdio.h>

//O caixa tem cédulas de R$50, R$20, R$10, R$5 e R$1.
int main ()
{
	int valor, i, fim = 0, saque;
	int nota[5] = {50, 20, 10, 5, 1};
	int quant[5] = {};
	scanf("%d", &saque);
	valor = saque;
	for(i = 0 ; i < 5 ; ++i)
	{
		while(1)
		{
			valor = valor - nota[i];
			if(valor < 0)
			{
				valor = valor + nota[i];
				break;
			}else if(valor == 0)
			{
				++quant[i];
				fim = 1;
				break;
			}else ++quant[i];
		}
		if(fim == 1) break;
	}
	for(i = 0 ; i < 5 ; ++i) printf("Notas de %d: %d\n", nota[i], quant[i]);
	return 0;
}
