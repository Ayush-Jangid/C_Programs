// Q17. Create a program to convert the given number(in seconds) into hours,minutes and seconds...

#include <stdio.h>

int main(){
    int n;
    printf("Enter second:-\n");
    scanf("%d",&n);
    if(n < 0){
        printf("\n!Invalid, Time can't be negative...\n\n");
        return 0;
    }

    int h = (n/3600);
        int m = (n - (3600*h))/60;
        int s = (n - (3600*h) - (m*60));

     printf("H:M:S = %d:%d:%d\n",h,m,s);
    return 0;
}