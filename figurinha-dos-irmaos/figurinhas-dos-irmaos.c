#include<stdio.h>
#include<stdlib.h>
int main()
{
int aux = 0,cm=0,cj=0,J=0,M=0,i,j=0,z=0,jj,zz,n,num;
scanf("%d",&n);
int* fig_j = (int*) malloc(sizeof(int)*n);
int* fig_m = (int*) malloc(sizeof(int)*n);
for(i=0;i<n;++i)
{
	scanf("%d",&num);
	if((num%2)==0)
	{
		fig_j[j] = num;
		J=J+1;
		for(jj=0;jj<j;++jj)
		{
			if(fig_j[jj]==num) aux = aux + 1;
		}
		if(aux == 0)
		{
			cj = cj + num;
		}
		aux = 0;
		j++;
	}else{
		fig_m[z] = num;
		M=M+1;
		for(zz=0;zz<z;++zz)
		{
			if(fig_m[zz]==num) aux = aux + 1;
		}
		if(aux == 0)
		{
			cm = cm + num;
		}
		aux = 0;
		z++;
	}
}
if(cj>cm)
{
	printf("%d\n%d\n%d\n",J,M,cj);
}else{
	printf("%d\n%d\n%d\n",J,M,cm);
}
return 0;
}
