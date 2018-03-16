#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	char s[MAX_SIZE];
	int i,n;
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]-=32;
			printf("%c",s[i]);
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]+=32;
			printf("%c",s[i]);
		}	
	}
	printf("\n");
}
