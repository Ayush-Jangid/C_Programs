// realloc():-
//            Sometimes the dynamic allocated memory is insufficient or more than required.
//            realloc is used to allocate memory of new size using the previous pointer and size...
// Syntax:-
//          ptr = realloc(ptr, new size);
//          ptr = realloc(ptr, 10 * sizeof(int));

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    for(int i = 0; i<5; i++){
        printf("Enter the value of ptr[%d]\n",i);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    // for(int i = 0; i<5; i++){
    //     printf("The value of ptr[%d] is:- %d\n",i, ptr[i]);
    // }
    
    printf("\n.....Now Enter the New values.....\n\n");
    ptr = realloc(ptr, 10 * sizeof(int)); // it will re-allocate the memory then you are able to store value again...
                                          
    for(int i = 0; i<10; i++){
        printf("Enter new value of ptr[%d]\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of ptr[%d] is:- %d\n",i , ptr[i]);
    }
    
    return 0;
}