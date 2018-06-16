#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	long long n,q,l,r,c=0;
	double mean;
	int Result;
	scanf("%lld",&n);
	scanf("%lld",&q);
	long long int a[n],sum[n];
	for(i=1,j=1;i<=n,j<=n;i++,j++)
	{
		scanf("%lld",&a[i]);
		sum[j]=a[i];
	}
	for(j=1;j<=n;j++)
	{
		c=sum[j]+c;
		sum[j]=c;
	}
	for(i=0;i<q;i++)
	{
		scanf("%lld",&l);
		scanf("%lld",&r);
		mean=(sum[r]-sum[l]);
	        mean=mean/((r-l)+1);
		Result=ceil(mean);
		printf("%d\n",Result);
	}
}

