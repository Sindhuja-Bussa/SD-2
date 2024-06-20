#include<stdio.h>
int n,a[100],i,sum1=0,s;
int sum(int[],int);
main()
{
	printf("\nenter n value:");
	scanf("%d",&n);
	printf("\n enter array elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	s=sum(a,n);
	printf("%d",s);
}
int sum(int a[],int n)
{
	for(i=1;i<=n;i=i+2)
	{
		sum1=sum1+a[i];
	}
    return sum1;
}
