#include <stdio.h>

struct _data
{
	int dia;
	int mes;
	int ano;
};

typedef struct _data Data;

int dias_fev(int ano)
{
	int x = ano;
	if(ano % 100 == 0) x = ano/100;
	if(x % 4 == 0) return 29;
	else return 28;
}

int dias_ano(int ano)
{
	int x = ano;
	if(ano % 100 == 0) x = ano/100;
	if(x % 4 == 0) return 366;
	else return 365;
}

int main ()
{
	int i, quant = 0, mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};
	int dias;
	Data data1, data2;
	scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
	scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);
	if(data1.ano != data2.ano)
	{
		for(i = data1.ano+1 ; i < data2.ano ;++i)
		{
			dias = dias_ano(i);
			quant += dias;
		}
		mes[1] = dias_fev(data1.ano);
		for(i = data1.mes ; i < 12 ; ++i) quant += mes[i];
		quant += (mes[data1.mes-1] - data1.dia);
		mes[1] = dias_fev(data2.ano);
		for(i = 0 ; i < data2.mes - 1 ; ++i) quant += mes[i];
		quant += data2.dia;
		printf("%d\n", quant);
	}else{
		if(data1.mes == data2.mes) printf("%d\n", data2.dia - data1.dia);
		else
		{
			mes[1] = dias_fev(data1.ano);
			for(i = data1.mes ; i < data2.mes - 1 ; ++i) quant += mes[i];
			quant += mes[data1.mes - 1] - data1.dia;
			quant += data2.dia;
			printf("%d\n", quant);
		}
	}
	return 0;
}
