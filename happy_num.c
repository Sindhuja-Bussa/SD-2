#include<stdio.h>
#include<math.h>
main()
{
	int n,r,s=0;
	scanf("%d",&n);
	while(n!=1 && n!=4)
	{
      s=0;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r);
		n=n/10;
	}
	n=s;
}
	if(s==1)
	printf("happy number");
	else
	printf("no");
}
