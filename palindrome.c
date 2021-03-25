#include<stdio.h>
int main()
{
	int count=0;
	int n,i;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		int x=i,r,sum=0,temp;
		temp=x;
		while(x>0)
		{
			r=x%10;
			sum=(sum*10)+r;
			x=x/10;
		}
		if(temp==sum)
		count++;
	}
	printf("%d",count);
	
	return 0;
}
