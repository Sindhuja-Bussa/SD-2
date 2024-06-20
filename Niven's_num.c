#include<stdio.h>
main()
{
	int n,sum=0,x,res=0,m;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}
	res=m%sum;
	if(res==0)
	printf("Niven's Number");
	else
	printf("Not a Niven's Number");
}
