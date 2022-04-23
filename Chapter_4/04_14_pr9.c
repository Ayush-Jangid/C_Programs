#include <stdio.h>
// To check the number is prime or not...
// This is not the best method to solve this problem...
int main(){
    int i, n, prime=0;
printf("Enter the value of n: \n");
scanf("%d",&n);

    for(i=2; i<n; i++){
                          if(n%i==0){
                              prime=1;
                              break;
                          }
    }

    if(prime==1){
        printf("This is not a prime number\n");
    }
    else{
        printf("This is a prime number");
    }
    
    return 0;
}