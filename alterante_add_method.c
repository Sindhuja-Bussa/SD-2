#include<stdio.h>
int max(int num1,int num2)
{
	return (num1>num2)? num1:num2;
}
int maxt(int* hval,int n)
{
	if(n<0)
	return 0;
	if(n==0)
	return hval[0];
	int pick=hval[n]+maxt(hval,n-2);
	int notpick=maxt(hval,n-1);
	return max(pick,notpick);
}
main()
{
	int hval[]={6,7,1,3,8,2,5};
	int n=sizeof(hval)/sizeof(hval[0]);
	printf("possible high theft is: %d",maxt(hval,n-1));
}
