#include<stdio.h>
int main(){
	int a,b,c,i,d,numberOfterms;
	scanf("%d%d%d",&a,&b,&c);
	numberOfterms=(b-a)/c;
	numberOfterms++;
	d=a;
	for(i=d;i<=b;i+=c)
	{
		if(d==b)
		{
			printf("YES");
			break;
		}
	}
			printf("NO");

}
