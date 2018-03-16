#include<stdio.h>
int fact(int a);
int main()
{
	int n,x;
	scanf("%d",&n);
	x=fact(n);
	printf("%d\n",x);
}
int fact(int a)
{
	if(a==1)
		return (a);
	else
		return (a*fact(a-1));
}
