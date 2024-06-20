#include<stdio.h>
int i;
void countingsort(int a[],int n)
{
	int out[20];
	int max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	int count[20];
	for(i=0;i<=max;++i)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=1;i<=max;i++)
	{
		count[i]+=count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		out[count[a[i]]-1];
	}
	for(i=0;i<n;++i)
	{
		a[i]=out[i];
	}

}
void print(int a[],int n)
{
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int main()
{
	int a[]={1,0,8,6,8,4,2,1,0,1,2,6,8,9,1};
	int n=sizeof(a)/sizeof(a[0]);
	countingsort(a,n);
	print(a,n);
}
