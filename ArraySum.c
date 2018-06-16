#include<stdio.h>
int main(){
	long int a[10],sum=0;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("%ld",sum);

}
