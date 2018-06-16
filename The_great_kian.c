#include<stdio.h>
int main()
{
	int i,n;
	long a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%ld",&a[i]);
	}
	i=0;
	long sum1=0;
	while(i<n)
	{
		sum1+=a[i];
		i+=3;
	}
	int j=1;
	long sum2=0;
	while(j<n)
	{
		sum2+=a[j];
		j+=3;
	}
	int k=2;
	long sum3=0;
	while(k<n)
	{
		sum3+=a[k];
		k+=3;
	}
	printf("%ld %ld %ld",sum1,sum2,sum3);
}
