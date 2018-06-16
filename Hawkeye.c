#include<stdio.h>
int main()
{
	int n;
	int l=1,dec;
	int i,j,p,m,k;
	int a[100][100];
	scanf("%d",&n);
	scanf("%d%d%d",&i,&j,&p);
	for(m=0;m<n;m++){
		for(k=0;k<n;k++){
		a[m][k]=0;
		
	//printf("%d ",a[m][k]);
		}
	printf("\n");
	}
	a[i][j]=p;
	
	while(p!=0){
		dec=p;	
		//Up, Down, Left, Right
		a[i-l][j]=dec-l;
		a[i+l][j]=dec-l;
		a[i][j-l]=dec-l;
		a[i][j+l]=dec-l;
		//right up Diagonal, Right bottom diagonal ,Left up diagonal,Left down diagonal
		a[i-l][j+l]=dec-l;
		a[i+l][j+l]=dec-l;
		a[i-l][j-l]=dec-l;
		a[i+l][j-l]=dec-l;
		
		//Power decreases and layer increases
	//	l++;
		p--;
		}
	for(m=0;m<n;m++){
		for(k=0;k<n;k++){
			printf("%d ",a[m][k]);
		}
	printf("\n");
	}

}
