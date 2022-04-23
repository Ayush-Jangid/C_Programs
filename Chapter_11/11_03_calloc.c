// calloc():-
//            calloc stands for continuous allocation...
//            It intializes each memory block with a default value of 0.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int * ptr;

    ptr = (int *) calloc(10 , sizeof(int));

    for(int i = 0 ; i<10; i++){
        printf("The value of ptr[%d] is %d\n", i , ptr[i]); // calloc stores 0 in every memory block...
    }

    return 0;
}