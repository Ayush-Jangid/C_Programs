// free():-
//          We can use free() function to  de-allocate the memeory.
//          The memeory allocated using calloc/malloc is not deallocated automatically...

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) malloc(3 * sizeof(int));
    
    printf("Enter the value of element 1\n");
    scanf("%d",&ptr[0]);

    printf("Enter the value of element 2\n");
    scanf("%d",&ptr[1]);

    printf("Enter the value of element 3\n");
    scanf("%d",&ptr[2]);



    printf("The value of element 1 is %d\n",ptr[0]);

    free(ptr); // free() will de allocate the memory and store value also get de allocate...

    printf("The value of element 2 is %d\n",ptr[1]);

    printf("The value of element 3 is %d\n",ptr[2]);

    return 0;
}