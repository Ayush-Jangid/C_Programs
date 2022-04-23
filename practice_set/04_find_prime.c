// Q4. Create a program to check the entered number is prime or not...

#include <stdio.h>

int main(){
    int prime = 0;
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    for(int i=2; i<n; i++){  // Also can:-  for(int i=2; i*i <n; i++){
        
        if(n%i == 0){
            prime = 1;
            break;
        }
    }
    

    if(prime == 1){
        printf("%d is not a prime number...\n",n);
    }
    else if(n<2){
        printf("%d is not a prime number...\n",n);
    }
    else {
        printf("%d is a prime number...\n",n);
    }
    return 0;
}