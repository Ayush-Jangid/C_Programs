// Q2. Solve problem 1 using calloc...

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *array;
    array = (int *) calloc(6, sizeof(int));

    for(int i= 0; i<6; i++){
        printf("Enter the value of array[%d]\n",i);
        scanf("%d",&array[i]);
    }
    for(int i = 0; i<6; i++){
        printf("The value of array[%d] is:- %d\n",i , array[i]);
    }

    return 0;
}