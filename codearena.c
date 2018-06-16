#include<stdio.h>
int main(){
	int i,n,m,p,a[100],b[100];
	scanf("%d%d%d",&n,&m,&p);
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	if(m%a[m-1]==0)
		printf("%d",a[m-1]);
}
