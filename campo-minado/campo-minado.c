#include<stdio.h>
#include<stdlib.h>
//. = 46 e * = 42
int main()
{
int i,ii,j,jj,m,n,rodada = 0,bomba=0;
int** campo;
char* aux;
scanf("%d %d",&n,&m);
getchar();
while((n!=0)&&(m!=0))
{
    aux = (char*) malloc(sizeof(char)*m);
    campo = (int**) malloc(sizeof(int*)*n);
    for(i = 0; i < n; ++i)
    {
        campo[i] = (int*) malloc(sizeof(int)*m);
        gets(aux);
        for(j=0;j<m;++j)
        {
            campo[i][j] = aux[j];
        }
    }
    printf("Field #%d:\n",++rodada);
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            if(campo[i][j] == 42)
            {
                printf("*");
            }else{
                for(ii=-1;ii<=1;++ii)
                {
                    if((i+ii)<0 || (i+ii)==n) continue;
                    for(jj=-1;jj<=1;++jj)
                    {
                        if((j+jj)<0 || (j+jj)==m) continue;
                        if(campo[i+ii][j+jj]==42)++bomba;
                    }
                }
            printf("%d",bomba);
            bomba = 0;
            }
        }
        printf("\n");
    }
	free(campo) ; free(aux);
	scanf("%d %d",&n,&m);
	getchar();
	if((n!=0)&&(m!=0))printf("\n");
}
return 0;
}
