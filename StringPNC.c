#include<stdio.h>
#include<string.h>
int main()
{
        int i,t,j,m,k,s,p;
        char s1[100000],s2[100000];
        scanf("%d",&t);
	for(p=0;p<t;p++)
	{
        scanf("%s%s",&s1,&s2);
        s=strlen(s1);
        m=strlen(s2);
	int count=0,c=0;
       		if(s2>='a' && s2<='z')
		{
			for(i=0;i<s;++i)
			{
				for(j=0;j<m;++j)
				{
					if(s1[i]==s2[j])
						c++;
					else
						c=0;
			
				}
					if(c!='0')
						count=count+1;
			}
		}
	if(count==s)
	{
                printf("YES\n");
	}
        else
                printf("NO\n");
	}
}
