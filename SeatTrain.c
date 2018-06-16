#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void seatName(int n){
    int a=n/3, b=n%3;
    if(b==2)
        printf("MS\n");
    else if(a&1)
        printf("AS\n");
    else
        printf("WS\n");
}

int compSeat(int s1){
    int num2;
        int a = (s1%12);
         num2 =((a<=6 && a!=0) ?
         s1+((abs(a-6)*2)+1)
                               :
         s1-((abs(a-6)*2)-1));
         return num2;
}

int main()
{
    int s1, s2;
    int testCase;
    scanf("%d", &testCase);
    while(testCase--){
    scanf("%d", &s1);
    printf("%d ", compSeat(s1));
    seatName(compSeat(s1));
    }
    return 0;
}
