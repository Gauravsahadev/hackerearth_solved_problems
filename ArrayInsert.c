#include<stdio.h>
int main()
{	
	int n,q,ch,i,x,y,sum,a[100],j;
	scanf("%d",&n);
	scanf("%d",&q);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(j=0;j<q;j++)
	{
		scanf("%d",&ch);
		scanf("%d%d",&x,&y);
		sum=0;
		switch(ch)
		{
			case 1:
				a[x]=y;
				break;				
			case 2:	
				for(i=x;i<=y;i++)
				{
					sum+=a[i];
				}
					printf("%d\n",sum);	
					
		}					
	}
}
