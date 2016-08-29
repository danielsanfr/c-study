#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n;
scanf("%d\n",&n);
int* vetor = (int*) malloc(sizeof(int)*n);
for(i=0;i<n;++i)
{
	scanf("%d",&vetor[i]);
}
for(i=(n-1);i>=0;--i)
{
	if(i==0){
		printf("%d\n",vetor[i]);
	}else{
		printf("%d ",vetor[i]);
	}
}
return 0;
}
