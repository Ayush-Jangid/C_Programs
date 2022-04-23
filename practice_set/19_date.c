// Q19. Create a program to convert given number(in days) into years month and days...

#include <stdio.h>

int main(){
    int n;
    printf("Enter days:-\n");
    scanf("%d",&n);
    
    int y = (n/365);
    int m = (n - (365*y))/30;
    int d = (n - (365*y) - (m*30));

    printf("DD/MM/YY:- %d/%d/%d\n",d,m,y);
    return 0;
}