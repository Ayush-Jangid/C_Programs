#include <stdio.h>

int main(){
    int a;
    int prime;
    printf("Enter a number\n");
    scanf("%d",&a);

    for(int i=2;i<a;i++){
        printf("%d / %d\n",a,i);
        if(a%i == 0){
            printf("%d is divisible by %d",a,i);
            prime = 1;
            break;
        }
    }
    if(prime==1){
        printf("%d is not a prime number\n",a);
    }
    else if(a<2){
        printf("%d is not a prime number\n",a);
    }
    else if(prime == 0){
            printf("%d is a prime number\n",a);
    }
    return 0;
}