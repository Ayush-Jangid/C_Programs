//Q.5 Write a program to print the value of a variable i by using "pointer to pointer " type of variable...
#include <stdio.h>

int main(){
    int i =9;
    int *pointer = &i;
    int **ptp = &pointer;

  printf("The value of i is %d\n",**ptp); // **ptp will print the value of i... 
                                          // *ptp will print the value of pointer...
    return 0;
}