#include<stdio.h>
#include<math.h>
int roundNo(float num)
{
	return num < 0 ? num - 0.5 : num + 0.5;
}
void main()
{
	long long int d,m,x,a,b,picu,c,tm,count;
	int t;
	float temp,rem;
	scanf("%d",&t);
	while(t!=0)
	{
		scanf("%lld%lld%lld%lld%lld",&d,&a,&m,&b,&x);
		if(d==0 && a==0 && b==0 && x==0&&m==0)
		{
			count=1;
		}
		else if(m!=0 && a*m!=-b && a<x){
			tm=(x-d)/(a*m+b);
			tm=roundNo(tm);
			count=(m+1)*tm;
			picu=d+(((a*m)+b)*tm);
		//	printf("if:%lld\t%lld\n",count,picu);

		}
		else{
			tm=(x-d)/(a+b);
			tm=roundNo(tm);
			count=(m+2)*tm;
			picu=d+((a+b)*tm);
		//	printf("else:%lld\n",picu);
		}
	//	picu=d+(((a*m)+b)*tm);
		if(picu>=x)
		{
			count=1;
		}
		else{
		rem=x-picu;
		temp=(rem/a);
		temp=ceil(temp);
//		printf("%f",temp);
		count=count+temp;
		}
		printf("%lld\n",count);
		t--;
	}
}

