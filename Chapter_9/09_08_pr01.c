//Q1. Create a two dimensional vector using structures in C...
#include <stdio.h>

struct vector{
int x,y;
};

int main(){
    struct vector v1,v2;
    
    v1.x =43;
    v1.y =33;

    v2.x =76;
    v2.y =94;

    printf("\nValue of x in v1 is %d\n",v1.x);
    printf("Value of y in v1 is %d\n\n",v1.y);

    printf("Value of x in v2 is %d\n",v2.x);
    printf("Value of y in v2 is %d\n\n",v2.y);
    return 0;
}