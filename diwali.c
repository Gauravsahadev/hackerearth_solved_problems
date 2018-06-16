#include<stdio.h>
int main()
{
	int t,a,k,n,i,m;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a);
		scanf("%d",&k);
		scanf("%d",&n);
	
		m=k*(n-1);
		a=a+m;
	
		printf("%d\n",a);
	}
}
