// Q7. Create a program to calculate the factorial of the given number...

// Factorial:- factorial of 5 = 5*4*3*2*1 = 120...
#include <stdio.h>

int main(){
    int n = 5;
    int val = 1;
    printf("Enter the value of a number\n");
    scanf("%d",&n);

    for(int i = n; i>1; i--){
            val*=i; // val = val * i;
    }
    printf("The factorial of %d is %d\n",n,val);
    return 0;
}