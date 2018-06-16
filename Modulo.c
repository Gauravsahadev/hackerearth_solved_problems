#include<stdio.h>
int main()
{
	int m=1000000000,i,n;
	long long int answer=1;
	int modulo=m+7,arr[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	for(i=0;i<n;i++)
	{
		answer=(answer*arr[i])%modulo;
	}
	printf("%lli\n",answer);
	
}

