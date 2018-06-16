
#include<stdio.h>
int main()
{
	int testCase,t,i,j;
	char a[10][10];
	scanf("%d",&testCase);
	for(t=1;t<=testCase;t++)
	{
		for(i=1;i<=4;i++)
		{
			for(j=1;j<=4;j++)
			{
				scanf("%c",&a[i][j]);
			}
		}
		for(i=1;i<=4;i++)
        	{
               	 	for(j=1;j<=4;j++)
                	{
                       	 	printf("%c\t",a[i][j]);
                	}
		printf("\n");
        	}
	}
}
