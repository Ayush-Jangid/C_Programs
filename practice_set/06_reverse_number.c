// Q6. Create a program to reverse a number...

#include <stdio.h>

int main(){
    int n,remainder, result;
    printf("Enter the number\n");
    scanf("%d",&n);
    int num;
    num = n;

    while(n!=0){
        remainder = n%10; // It will take the last digit of the number...
        result = (result*10)+remainder;  
        n = n/10;
    }
    printf("The reverse of %d is %d\n",num,result);
    return 0;
}