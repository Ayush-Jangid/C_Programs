#include <stdio.h>
// This is not so important topic...

// Pointer to pointer simply means a pointer storing the address of another pointer...
// Like pp storing the value of p pointer below...
int main(){
    int a =6;
    int *p;
    p = &a;

printf("The address of a %u\n",&a);
printf("\n");
printf("The value of p is %d\n", *(&p));
printf("The address of p is %u\n" , &p);
printf("\n");

int **pp;
pp =&p;   // pp storing the address of p...
printf("\n");
printf("The value of p is %d\n", *pp);
printf("The address of p is %u\n" , pp);
printf("The address of p is %u\n",  &(*(&p))); // Only for fun...
printf("\n");

printf("The value of a by using pp is %d\n", **pp); 

printf("\n");

int ***ppp;
ppp= &pp; // ppp storing the address of pp... We can create infinite pointer to pointer...

    return 0;
}