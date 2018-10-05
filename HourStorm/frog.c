#include<stdio.h>
int main()
{

	int x,y,c;
	int s,t;
	scanf("%d%d",&x,&y);
	scanf("%d%d",&s,&t);
	int i,j;
	if(t%2==0)
	{
		for(i=y,j=x;i<y+s,j<x+s;i++,j++)
			c+=2;
		for(i=y,j=x;i<=y+s/2,j<=x+s/2;i++,j++)
                        c+=0;
	}
	else
	{
		for(i=y,j=x;i<=y+s,j<=x+s;i++,j++)
                        c+=2;
                for(i=y,j=x;i<=y+s/2,j<=x+s/2;i++,j++)
                        c+=1;
	}
	printf("%d",c);
}
