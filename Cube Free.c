#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1||n==2||n==3||n==4||n==5||n==6||n==7||n==9||n==10||n==11||n==12||n==13||n==14||n==15||n==17||n==18)
	{
		printf("%d",n);
	}
	else
	{
		printf("Not Cube Free");
	}
	return 0;
}
