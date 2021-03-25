#includ(stdio.h)
int n[1000000]={0};
void cube_free()
{
	int i,j,k;
	for(i=2;i<=100;i++)
	{
		if(n[i]==0)		
	{
	k=i;
	for(j=k;j<=1000000;j+=k)
	n[i]=1;
	}
}
	k=1;
	for(i=1;i<=1000000;i++)
	{
		if(n[i]==0)
		n[i]=k++;
	}
}
int main()
{
	cube_free();
	int m;
	scanf("%d",&m);
	if(n[m]!=1)
	{
	 printf("%d",m);
	}
	else
	{
		printf("Not Cube Free");
	}
	
	return 0;
}
