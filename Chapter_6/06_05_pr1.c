#include <stdio.h>
//Q.1 Write a program to print the address of a variable. Use this address to get the value of this variable... 
int main(){
    int v;
    v=20;

   printf("The address of v is %u\n",&v);
   printf("The value of v is %d\n",*(&v));   //Getting value of v from address
   printf("\n"); 

//  Solving this problem using pointer...
printf("...Using Pointer...\n");
printf("\n");
   int a = 5;
   int *pointer = &a;

printf("The address of v is %u\n",pointer);
printf("The value of v is %d\n", *pointer);

    return 0;
}