#include<stdio.h>
main()
{
	int i,j,m,k;
	printf("enter no.of rows:");
	scanf("%d",&m);
	for(i=m;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
		{
		printf(" ");
	}
	
	for(k=1;k<=m;k++)
	{
		if(k==1||k==m||i==1||i==m)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
		
	}
	printf("\n");
}
	
}
