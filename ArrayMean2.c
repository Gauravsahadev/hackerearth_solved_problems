#include <stdio.h>
int main()
{
	long long n,q,l,r;
	scanf("%lld %lld",&n,&q);
	long long int a[n];
	for(int i=1;i<=n;i++)
	{
	scanf("%lld",&a[i]);
	}
for(int i=1;i<=n;i++)
{
a[i]=a[i-1]+a[i];
}
while(q--)
{
scanf("%lld%lld",&l,&r);
printf("%lld\n",(a[r]-a[l-1])/(r-l+1));
}
return 0;
}
