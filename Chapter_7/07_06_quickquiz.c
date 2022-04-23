// Addition of a number to a pointer...
// Subtraction of a number to a pointer...
// Subtraction of one pointer from another...
// Comparsion of two pointer variable...
#include <stdio.h>

int main(){
    // Addition of a number to a pointer...

    // int a=1;
    // int *b = &a;

    // printf("The address of a is %u\n", b);
    // printf("The addition of number and pointer is %u\n",b+1); // or we can use this also:- b++;

     //                                AND

    // Subtraction of a number to a pointer...

    //    int a=1;
    // int *b = &a;

    // printf("The address of a is %u\n", b);
    // printf("The addition of number and pointer is %u\n",b-1); // or we can use this also:- b--;

 //                                     AND

// Subtraction of one pointer from another...
//  int a,b,c;
//  int *ptr = &a;
//  int *pointer =&b;
//  int *p=&c;

//  printf("The address of c is %u\n",p);
//  printf("The address of b is %u\n",pointer);
//  printf("The address of a is %u\n",ptr); 

// printf("Difference between pointer and ptr: %u\n",ptr - pointer);
// // The difference is 1 means (1*4)bytes = 4bytes
// printf("\n");
// printf("Difference between p and ptr: %u\n",ptr - p);
// // The difference is 2 means (2*4)bytes = 8bytes
// printf("\n");
// printf("Difference between pointer and p: %u\n",pointer - p);
// printf("\n");
//printf("Just Trying: %u\n",ptr + pointer); // adding a pointer with another pointer is not possible...

//                                     AND

//                    Comparsion of two pointer variable OR EQUALITY

    int i,j;
int *ptr = &i;
int *p = &j;

printf("The address of j is %u\n", p);
p++;
p++;
printf("The address of j is %u\n", p);
++ptr;
printf("The address of i is %u\n", ptr);


    return 0;


}