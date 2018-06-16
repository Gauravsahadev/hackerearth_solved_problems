#include<stdio.h>
int main()
{
	int i,n;
	long long num,sum1=0,sum2=0,sum3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%lld",&num);
	    if(i%3==0)
	        sum3+=num;
	    else if(i%3==1)
	        sum2+=num;
	    else
	        sum1+=num;
	}

	printf("%lld %lld %lld",sum3,sum2,sum1);
}