#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Enter value of a \n");
    scanf("%d",&a);

    b = a%2;
    printf("The remainder is %d",b);
    return 0;
}