#include<stdio.h>
main()
{
	int n,i,x=0,y=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{	
		    printf("%d ",x);
			x=x+7;
		}
		else
		{	printf("%d ",y);
			y=y+6;	
		}
	}
	if(n%2!=0)
	printf("\n %d term is in the series %d\t",n,(x-7));
	else
	printf("\n %d term is in the series %d\t",n,(y-6));
}
