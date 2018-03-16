#include<stdio.h>
int main()
{
	int n,i,a[100],largest,smallest,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>largest)
			largest=a[i];
	}
	smallest=a[0];
	for(i=0;i<n;i++)
	{
		if(smallest>a[i])
			smallest=a[i];
	}
	printf("%d %d\n",largest,smallest);
	smallest++;
	for(i=0;i<n;i++)
	{
		if(a[i]==smallest)
			smallest++;
		else
			printf("NO\n");
	}
}
		
	
