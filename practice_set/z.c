#include <stdio.h>

int main(){
    int a;
    printf("Enter first number:\n");
    scanf("%d",&a);
    int b;
    printf("Enter last number:\n");
    scanf("%d",&b);
    int prime = 0;

    int p[b];
    int np[b];
    int y =0;
    int n =0;

    for (int i=a+1; i < b; i++)
    {
    for (int j=2; j < i; j++)
    {
        if(i%j == 0){
            prime = 1;
            break;
        }
        else{
            prime = 0;
        }

    }
            if(prime == 1){
            // printf("%d is not a prime number\n",i);
            np[n] = i;
            n++;
        }
        else{
            // printf("%d is a prime number\n",i);
               p[y] = i;
               y++;
        }
    }

printf("\nPrime Numbers between (%d-%d)are:-\n",a,b);
for(int i=0; i<y;i++){
    printf("%d\n",p[i]);
}

    
    return 0;
}