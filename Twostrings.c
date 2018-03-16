#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int show_anagram(char [],char []);
int main()
{
        int k,t,c,i;
        char s1[100000],s2[100000],d[20];
        scanf("%d",&t);
        for(k=0;k<t;k++)
        {
                c=0;
                scanf("%s %s",&s1,&s2);
                c=show_anagram(s1,s2);
                d[k]=c;
        }
        for(i=0;i<t;i++)
        {
                if(d[i]==1)
                        printf("YES\n");
                else
                        printf("NO\n");
        }
        return 0;

}
int show_anagram(char s1[],char s2[])
{
        int a[26]={0},b[26]={0},i=0;
        while(s1[i]!='\0')
        {
                a[s1[i] - 'a']++;
                i++;
        }
        i=0;
        while(s2[i]!='\0')
        {
                b[s2[i] - 'a']++;
                i++;
        }
        for(i=0;i<26;i++)
        {
                if(a[i]!=b[i])
                {
                        return 0;
                }
                else
                        return 1;
        }
}

