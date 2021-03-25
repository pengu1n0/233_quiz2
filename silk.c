#include<stdio.h>
int main()
{
	int r,t,r1,r2,r3,i,j;
	scanf("%d",&r);
	scanf("%d",&t);
	char A[r][70];
	for(i=0;i<r;i++)
	{
		for( j=0;j<70;j++)
		{
			A[i][j] = 'o';
		}
	}
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&r1,&r2,&r3);
		int x=0;
		for(j=0;j<r3;j++)
		{
			A[r1-1][j+r2-1]='x';
		}
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<70;j++)
		{
			printf("%c",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
