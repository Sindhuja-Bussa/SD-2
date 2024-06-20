#include<stdio.h>
int i,j,m;
main()
{
	printf("enter the no.of rows:");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==i||j==1||i==m)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
