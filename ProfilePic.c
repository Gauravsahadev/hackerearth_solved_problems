#include<stdio.h>
int main()
{
        int l,w,h,n,i;
        scanf("%d",&l);
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d %d",&w,&h);
                if(w<l||h<l)
                {
                        printf("\nUPLOAD ANOTHER");
                }
                else if(w>=l&&h>=l)
                {
                        if(w==h)
                        {
                                printf("\nACCEPTED");
                        }
                        else
                        {
                                printf("\nCROP IT");
                        }
                }
        }
}

