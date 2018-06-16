#include<stdio.h>
int resolve(int);
int main()
{
	int t,seat_no,i,temp;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&seat_no);
		temp=resolve(seat_no);
		if((seat_no==1)||(seat_no%6==0)||((seat_no-1)%6==0))
		{
			printf("WS\n");
		} 
		else if(temp==2)
		{
			printf("MS\n");
		}	
		else
			printf("AS\n");
	}

}
int resolve(int tn)
{
	int b,a,d=3;
	b=(tn-2)/d;
//	b+=1;
	
	a=(tn-(b)*d);
	return a;
}
   









