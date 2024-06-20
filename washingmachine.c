#include<stdio.h>
int wt;
void time(int);
void time(int wt)
{
	if(wt>=0 && wt<=2000)
	printf("TIME ESTIMATED : 25 min");
	else if(wt>2000 && wt<=4000)
	printf("TIME ESTIMATED : 35 min");
	else if(wt>4000 && wt<=7000)
	printf("TIME ESTIMATED : 45 min");
	else if(wt>7000)
	printf("OVERLOADED");
    else
    printf("INVALID INPUT");	
}
main()
{
	scanf("%d",&wt);
	time(wt);
}
