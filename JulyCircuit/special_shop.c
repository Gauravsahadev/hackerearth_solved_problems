#include<stdio.h>
int main(){
	int testCase,sum,count,smallest;
	scanf("%d",&testCase);
	while(testCase!=0){
		int n,a,b;
		scanf("%d",&n);
		scanf("%d",&a);
		scanf("%d",&b);
		count=(a+b)-1;
		smallest=(a*(count*count)+b*((n-count)*(n-count)));
		while(count!=((n+a+b)-count)){
			sum=(a*(count*count)+b*((n-count)*(n-count)));
			if(sum<smallest)
			 	smallest=sum;
			count+=1;
		}
		printf("%d\n",smallest);
		testCase--;
	}
}
