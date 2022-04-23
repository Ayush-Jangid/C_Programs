//                                      ...MALLOC...
//  malloc():- 
//             malloc stands for memory allocation. It takes number of bytes to be allocated as an input 
//             and returns a pointer of type void...

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Size of operator in C...
    // printf("The size of int on my pc is:- %d bytes\n",sizeof(int));
    // printf("The size of float on my pc is:- %d bytes\n",sizeof(float));
    // printf("The size of char on my pc is:- %d byte\n",sizeof(char));

int *ptr;
ptr = (int *)malloc(5 * sizeof(int));

// The expression return a NULL pointer if the memory cannot be located...


// Now we can use ptr as an array...

for(int i = 0; i<5 ; i++){
    printf("Enter the value of ptr[%d] is %d\n",i);
    scanf("%d",&ptr[i]);
}

for(int i = 0; i<5 ; i++){

printf("The value of ptr[%d] is %d\n",i,ptr[i]);

}

    return 0;
}