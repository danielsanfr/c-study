#include<stdio.h>
//******************Função Soma******************//
int soma(int a, int b)
{
	return a + b;
}
//****************Função Subtração***************//
int subt(int a, int b)
{
	return a - b;
}
//***************Programa Principal**************//
int main()
{
int a, b, ope;
printf("Digite os valores:\n");
scanf("%d %d",&a,&b);
printf("Escolha a operação:\n0 - Soma\n1 - Subtração\n");
scanf("%d",&ope);
if(ope == 0)
{
	printf("%d\n", soma(a, b));
}
else
{
	if(ope == 1)
	{
		printf("%d\n", subt(a, b));
	}
	else
	{
		printf("Operação invalida!\n");
	}
}
return 0;
}
