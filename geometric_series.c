#include<stdio.h>
main()
{
	int n,i,x=1,y=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		x=x*2;
		else
		y=y*3;
	}
	if(n%2!=0)
	printf("\n %d term is in the series %d\t",n,x/2);
	else
	printf("\n %d term is in the series %d\t",n,y/3);
}
