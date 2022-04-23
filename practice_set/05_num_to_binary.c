// Q5. Create a program to convert decimal number into binary...

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int num = n;

    int i =0;
    int rem[n];

    while(n!=0){

     rem[i] = n%2;
     i++;      
     n = n/2;
    }

    int d = i;
    printf("\n%d in binary:- ",num);
    for(int j=0; j<d; j++) // j=0; 0<4;
    {
        printf("%d",rem[i-1]);
        i--;
    }
    printf("\n\n");
   

    return 0;
}