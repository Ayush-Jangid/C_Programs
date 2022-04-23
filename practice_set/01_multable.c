// Q1. Print multiplication table of given number...

#include <stdio.h>

int main(){
    int n;
    int result;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("\t...THE MULTIPLICATION OF %d...\n\n",n);
    for(int i = 0; i<10; i++){
        result = n * (i+1);
        printf("\t\t%d X %d is %d\n",n, i+1, result);
    }
    return 0;
}