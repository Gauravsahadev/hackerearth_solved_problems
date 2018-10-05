#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	int m,n,i=0,c=0;
	long long int j;
        int temp1,temp2;
	long long a[1000000000],b[1000000000];
	scanf("%d",&t);
	while(t!=0)
	{
	//	int m,n,i=0,c=0,j;
	//	int temp1,temp2;
	//	long long a[1000000000],b[1000000000];
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%ll",&a[j]);
		}
		 for(j=0;j<n;j++)
                {
                        scanf("%ll",&b[j]);
                }
		m=floor((float)n/2);
		while(a[m]!=b[m] || c<=n)
		{
			temp1=a[0];
			temp2=b[n-1];
			for(j=0;j<n-1;j++)
			{
				a[j]=a[j+1];
				b[n-j-1]=b[n-j-2];
			}
			a[n-i-1]=temp2;
			b[i]=temp1;
			i++;
			c++;

		}
		if(a[m]==b[m])
			printf("%d\n",i);
		t--;
	}
}
