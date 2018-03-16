#include<stdio.h>
int main() {
    int t;
    long int a[7];
    char days[7][10] = {"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
    
    scanf("%d",&t);
    while(t--) {
        long int week = 0;
        long int k,kk;
        
        scanf("%ld",&k);
        kk=k;
        
        for(int i=0; i<7; i++) {
            scanf("%ld",&a[i]);
            week+=a[i];
        }
        
        k%=week;
        k=(k==0)?kk:k;
        
        while(k>0) {
            for(int i=0; i<7; i++) {
                k-=a[i];
                if(k<=0) {
                    printf("%s\n",days[i]);
                    break;
                }
            }
        }    
    }
    return 0;
}
