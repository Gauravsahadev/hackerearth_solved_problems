#include<stdio.h>
int main()
{
	int n,j;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		int i=2;
		while(i<j)
		{
			if(j%i==0)
			{
				break;
				
			}
				i++;
		}
		if(i==j)
		{
			printf("%d\t",j);
		}
	}
}
