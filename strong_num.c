#include<stdio.h>
int strong_num(int);
int n,fact,sum=0,i,x,m;
main()
{
   scanf("%d",&n);
   m=n;
   if(m==strong_num(n))
   printf("Strong Number");
   else
   printf("Not a Strong Number");  
}

int strong_num(int n)
{
	while(n>0)
	{
		i=1,fact=1;
	    x=n%10;
	while(i<=x)
	{
		fact=fact*i;
		i++;
	}
	sum=sum+fact;
	n=n/10;
}
	return sum;
}
