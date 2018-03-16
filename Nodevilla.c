#include<stdio.h>
#define MAX_SIZE 100
int x,y;
int up(int x,int y);
int down(int x,int y);
int right(int x,int y);
int left(int x,int y);

int main()
{
	int n,x,y,i,j,count=0;
	int t1,t2,t3,t4;
	char arr[100][100];
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%s",&arr[i][j]);
		}	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}

	t1=up(x,y);
	printf("%c",t1);
	down(x,y)
	printf("%c",t2);
	right(x,y);
	printf("%c",t3);
	left(x,y);
	printf("%c",t4);
}
int up(int x,int y)
{	
	int upcount;
	while(arr[x][y]!='W')
	{
		arr[x--][y];
	}
	upcount=1;
	return x,y;
}
int down(int arr[x][y])
{
	int downcount;
	while(arr[x][y]!='W')
	{
		arr[x++][y];
	}
	downcount=1;
	return downcount;
	return arr[x][y];
}
int right(int arr[x][y])
{
	int rightcount;
	while(arr[x][y]!='W')
	{
		arr[x][y++];	
	}
	rightcount=1;
	return rightcount;
	return arr[x][y];
}
int left(int arr[x][y])
{
	int leftcount;
	while(arr[x][y]!='W')
	{
		arr[x][y--];
	}
	leftcount=1;
	return leftcount;
	return arr[x][y];
}


