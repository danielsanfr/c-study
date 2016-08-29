#include <stdio.h>

struct _aluno
{
	int num;
	char respostas[11];
};

typedef struct _aluno Aluno;

int main ()
{
	int i, num_alunos = 0, nota = 0, maior, maior_freq[11] = {};
	char gabarito[11];
	Aluno aluno;
	float aprov;
	gets(gabarito);
	scanf("%d ", &aluno.num);
	while(aluno.num != 9999)
	{
		++num_alunos;
		gets(aluno.respostas);
		for(i = 0 ; i < 10 ; ++i) if(aluno.respostas[i] == gabarito[i]) ++nota;
		printf("%d %.1f\n", aluno.num, (float)nota);
		++maior_freq[nota];
		if((float)nota >= 6.0) ++aprov;
		nota = 0;
		scanf("%d ", &aluno.num);		
	}
	maior = 0;
	for(i = 0 ; i < 11 ; ++i) if(maior_freq[i] > maior_freq[maior]) maior = i;
	printf("%.1f%%\n", (aprov*100/(float)num_alunos));
	printf("%.1f\n", (float)maior);
	return 0;
}

/*int main ()
{
	int aluno, i, aux = 0, aprov = 0, n_alunos = 0, maior = 0;
	float valor[11], ponto = 0;
	int quant[11];
	char gabarito[10], resposta_alu[10];
	gets(gabarito);
	scanf("%d ", &aluno);
	while(aluno != 9999)
	{
		gets(resposta_alu);
		++n_alunos;
		for(i = 0 ; i < 10 ; ++i) if(resposta_alu[i] == gabarito[i]) ++ponto;
		valor[(int)ponto] = ponto;
		++quant[(int)ponto];
		if(ponto >= 6) ++aprov;
		printf("%d %.1f\n", aluno, ponto);
		ponto = 0;
		scanf("%d ", &aluno);
	}
	for(i = 0 ; i < 11 ; ++i) if(quant[i] > maior) aux = i;
	printf("%.1f%%\n", (aprov*100/(float)n_alunos));
	printf("%.1f\n", valor[aux]);
	return 0;
}*/
