#include<stdio.h>
main()
{
	int n=10,sale;
	scanf("%d",&sale);
	if(sale>=1 && sale<=5)
	{
		printf("candies sold:%d\n",sale);
		printf("candies left:%d\n",n-sale);
	}
	else
	{
		printf("invalid input\n");
		printf("candies left:%d\n",sale);
	}
}
