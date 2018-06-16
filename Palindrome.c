#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,t=1,l=0;
	char s[100];
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	if(s[i]>=97 && s[i]<=122)
		l++;
	else 
		break;
	}
	if(l==n)
	{
	for(i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-1-i])
		{
			t=0;
			break;
		} 
	}
		if(t==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	else
		printf("Input lowercase only\n");
	return 0;
}
			
