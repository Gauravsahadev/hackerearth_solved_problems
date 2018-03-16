#include<stdio.h>
int main()
{
	int i,n,a[n];
	scanf("%d",&n);
	scanf("%d",a[n]);
	for(i=n-1;i>=0;i--)
	{
		a[i-1]=a[i]*a[i-1];
	}
	printf("%d",a[0]);
}
		
	
