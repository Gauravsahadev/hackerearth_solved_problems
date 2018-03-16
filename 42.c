#include<stdio.h>
int main()
{
	int n;
	for(;;)
	{
		scanf("%d",&n);
		if(n==42)
			break;
		else
			printf("%d\n",n);
	}
}
