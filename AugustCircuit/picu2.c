#include<stdio.h>
#include<math.h>
void main()
{
	long long int d,a,m,x,b,p;
	int t;
	float rem,s;
	scanf("%d",&t);
	while(t!=0)
	{
		scanf("%lld%lld%lld%lld%lld",&d,&a,&m,&b,&x);
		
		
			s=(x-d)%(a*m+b);
			p=floor((x-d)/(a*m+b))*(m+1);
			
			//printf("s:%f\t p %lld\n",s,p);


		if(s==0)
		{
			printf("%lld\n",p);
		}
		else if(s<a){
			p+=1;
			printf("%lld\n",p);
		}
		else{
			rem=(float)s/a;
			rem=ceil(rem);
			//printf("rem %f ",rem);
			p+=rem;
			printf("%i\n",p);
		}
		t--;
	}
}

