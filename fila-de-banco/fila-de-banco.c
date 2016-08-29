#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j=0,m,n,k,aux,maior;
scanf("%d%d%d\n",&n,&m,&k);
int* fila_um = (int*) malloc(sizeof(int)*n);
int* fila_dois = (int*) malloc(sizeof(int)*m);
int* fila_unica = (int*) malloc(sizeof(int)*(n+m));
for(i=0;i<n;++i)
{
	scanf("%d\n",&aux);
	fila_um[i] = aux;
}
for(i=0;i<m;++i)
{
	scanf("%d\n",&aux);
	fila_dois[i] = aux;
}
if(n>=m)
{
	maior = n;
}else{
	maior = m;
}
switch(k)
{
	case 1:
		for(i=0;i<maior;++i)
		{
			if(i<m)
			{
				fila_unica[j] = fila_dois[i];
				++j;
			}
			if(i<n)
			{
				fila_unica[j] = fila_um[i];
				++j;
			}
		}
		break;
	case 2:
		for(i=0;i<maior;++i)
		{
			if(i<n)
			{
				fila_unica[j] = fila_um[i];
				++j;
			}
			if(i<m)
			{
				fila_unica[j] = fila_dois[i];
				++j;
			}
		}
		break;
}
for(i=0;i<(n+m);++i) printf("%d\n",fila_unica[i]);
return 0;
}
