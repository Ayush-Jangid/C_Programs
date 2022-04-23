// Quiz:- Write a program to create a dynamic array of 5 floats using malloc(). 

#include <stdio.h>
#include <stdlib.h>
int main(){

    float *ptr;

    ptr = malloc(5 * sizeof(float));
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of ptr[%d]\n",i);
        scanf("%f",&ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of ptr[%d] is:- %.2f\n",i,ptr[i]);
    }
    
    
    
    return 0;
}