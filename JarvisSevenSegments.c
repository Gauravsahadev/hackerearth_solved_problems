#include<stdio.h>
int bulbcalc(int);
int sort(int sum[],int);
int main(){
	int t,size,num,result,i,j,temp,value,l;
	int a[100000],sum[100000];
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
	scanf("%d",&size);

	for(j=0;j<size;j++)
	{
		scanf("%d",&a[j]);	
	}
 	for(i=0;i<size;i++)
	{
		sum[i]=0;
		num=a[i];
			if(num==0)
			{
				result=bulbcalc(temp);
				sum[i]=sum[i]+result;
			}
			else
			{
				while(num>0)
					{
						temp=num%10;
						result=bulbcalc(temp);
						sum[i]=sum[i]+result;
						num=num/10;
					}
			}
	}
	result=sort(sum,size);
	for(i=0;i<size;i++)
	{
		if(result==sum[i])
		{
			value=i;
			break;
		}
	}
	printf("%d\n",a[value]);
	}
}

int bulbcalc(int temp){
	if(temp==1)
		return 2;
	else if(temp==4)
		return 4;
	else if(temp==7)
	    return 3;
	else if(temp==2 ||temp==3||temp==5)
		return 5;
	else if(temp==0 || temp==6 || temp==9)
		return 6;
	else if(temp==8)
		return 7;
}
int sort(int sum[],int size)
{
	int smallest,i;
	 smallest = sum[0];
 
   for (i = 0; i < size; i++) {
      if (sum[i] < smallest) {
         smallest = sum[i];
      		}
	}
	return smallest;
}

