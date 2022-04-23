// Q.11:- Create a program to calculate the given power of a number...

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int p;
    printf("Enter power of %d\n",n);
    scanf("%d",&p);
    long long int result = 1; // long long is used to store large numbers...

     for(int i = p; i>0; i--){
          result = result * n; // result *= n;
     }

         printf("The value of %d^%d is:- %d\n",n,p,result);

    return 0;
}