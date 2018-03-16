#include<stdio.h>
int main()
{
	int TestCase,n,t=2,i,j;
	char st[500],st2[500],diff[500];
	scanf("%d",&TestCase);
	for(j=0;j<TestCase;j++)
	{
	scanf("%d",&n);
	scanf("%s",&st);
	for(i=0;i<n;i++)
	{
		st2[i]=st[i];
		diff[i]=st[i];
	}
	for(i=0;i<n;i++)
	{
		while(t<st[i])
		{
			if(st[i]%t==0)
			{
				st[i]--;
				t=2;
			}
			else 
				t++;
		}
	t=2;	
	}
	for(i=0;i<n;i++)
	{
                while(st2[i]>t)
                {
                        if(st2[i]%t==0)
                        {
                                st2[i]++;
				t=2;
                        }
                        else
                                t++;
 
                }
        t=2;
        }	
	for(i=0;i<n;i++)
	{
		if((diff[i]-st[i])==(st2[i]-diff[i]))
		{
			if(st[i]<st2[i])
			{
				if(st[i]==32 || st[i]==127)
					printf("%c",st2[i]);
				else
					printf("%c",st[i]);
			}
			else
				if(st2[i]==32 || st2[i]==127)
				{
					printf("%c",st[i]);
				}
				else	
					printf("%c",st2[i]);
		}
		else if((diff[i]-st[i])>(st2[i]-diff[i]))
		{
			if(st2[i]==32 || st2[i]==127)
			{
				printf("%c",st[i]);
			}
			else
				printf("%c",st2[i]);
		}
		else 
		{
			if(st[i]==32 || st[i]==127)
			{
				printf("%c",st2[i]);
			}
			else
				printf("%c",st[i]);
		}
	}
	printf("\n");
}
 
}

