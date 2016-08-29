#include<stdio.h>
int main()
{
int i, j, aluno_p2[45], aluno_p3[30];
for(i = 0 ; i < 45 ; ++i)
{
	scanf("%d ", &aluno_p2[i]);
}
for(i = 0 ; i < 30 ; ++i)
{
	scanf("%d ", &aluno_p3[i]);
}
for(i = 0 ; i < 45 ; ++i)
{
	for(j = 0 ; j < 30 ; ++j)
	{
		if(aluno_p2[i] == aluno_p3[j])
		{
			printf("%d ", aluno_p2[i]);
			j = 30;
		}
	}
}
printf("\n");
return 0;
}
