#include<stdio.h>
int pytho(int arr[],int n)
{
	int a,b,c,i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				a=arr[i]*arr[i],b=arr[j]*arr[j],c=arr[k]*arr[k];
				if(a==b+c||b==a+c||c==a+b)
				{
					printf("%d %d %d",arr[i],arr[j],arr[k]);
					return 1;
				}
			}
		}
	}
	return -1;
}
int main()
{
	int arr[]={3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=pytho(arr,n);
	if(result==-1)
	printf("not\n");
	else
	printf("yes\n");
}
