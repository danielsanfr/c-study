#include <stdio.h>

int main ()
{
	float conta;
	int cod, quant;
	scanf("%d\n%d", &cod, &quant);
	switch (cod)
	{
		case 1:
			if(quant >= 15 || quant*5.30 >= 40) conta = quant*5.30 - quant*5.30*0.15;
			else conta = quant*5.30;
			break;
		case 2:
			if(quant >= 15 || quant*6.00 >= 40) conta = quant*6.00 - quant*6.00*0.15;
			else conta = quant*6.00;
			break;
		case 3:
			if(quant >= 15 || quant*3.20 >= 40) conta = quant*3.20 - quant*3.20*0.15;
			else conta = quant*3.20;
			break;
		case 4:
			if(quant >= 15 || quant*2.50 >= 40) conta = quant*2.50 - quant*2.50*0.15;
			else conta = quant*2.50;
			break;
	}
	printf("R$ %.2f\n", conta);
	return 0;
}
