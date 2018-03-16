#include<stdio.h>
int main()
{
	int i,k;
	char m[100],c;
	scanf("%s",&m);
	scanf("%d",&k);
	int alpha_inc=k%26;
	int num_inc=k%10;
	for(i=0;m[i]!='\0';++i)
	{	
		c=m[i];
		if(m[i]>=97&&m[i]<=122)
		{
		if(c+k>'z')
		{
			if(c+alpha_inc>'z')
				c=(c-'z'+alpha_inc)+'a'-1;
			else
				c+=alpha_inc;
		
		}
		else 
			c+=k;
			m[i]=c;
		}
		else if(m[i]>=65&&m[i]<=90)
		{
			 if(c+k>'Z')
			{
				
				if(c+alpha_inc>'Z')
					c=(alpha_inc+c-'Z')+'A'-1;
				else
					c+=alpha_inc;
			}
			else
				c+=k;
				m[i]=c;
		}
		else if(m[i]>=48&m[i]<=57)
		{
			 if(c+k>'9')
			{
				if(c+num_inc>'9')
					c=(num_inc+c-'9')+'0'-1;
				else
					c+=num_inc;
			}
			else
				c+=k;
				m[i]=c;
		}
		
	}
	printf("%s\n",m);
	return 0;
}
