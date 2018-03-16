#include <stdio.h>
#define MAX_SIZE 500  
int next(int n);  
 
int main()  
{  
	int Testcase,i,n;  
	int temp,value;  
	char st[MAX_SIZE];  
	scanf("%d",&Testcase);  
	while(Testcase--)  
   	{  
     		scanf("%d",&n);  
     		scanf("%s",st);  
     		for(i=0;i<n;i++)  
     		{
  
       			temp=st[i];  
       			value=next(temp);  
       	  		st[i]=value;  
     		}  
     	printf("%s\n",st);  
   	}    
}
int next(int n)
{
   	int i,Result;
   	int diff1,diff2;
   	int prime[12]={67,71,73,79,83,89,97,101,103,107,109,113};
   	if(n<=67)
   	{
     	Result=67;
   	}
   	else if(n>=113)
   	{
     	Result=113;
   	}
   	else
   	{
     	for(i=0;i<12;i++)
     	{
       		if(prime[i]>n)
       		{
         		diff1=prime[i]-n ;
         		diff2=n-prime[i-1];
         	if(diff1<diff2)
         	{
           		Result=prime[i];
           		break;
         	}
         	else
         	{
           		Result=prime[i-1];
           		break;
         	}
       		}
      	 }
   	}
   return Result;
}
 
