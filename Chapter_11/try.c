#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));
    
    printf("Enter the value of element 1\n");
    scanf("%d",&ptr[0]);

    printf("Enter the value of element 2\n");
    scanf("%d",&ptr[1]);

    printf("Enter the value of element 3\n");
    scanf("%d",&ptr[2]);

    printf("Enter the value of element 4\n");
    scanf("%d",&ptr[3]);

    printf("Enter the value of element 5\n");
    scanf("%d",&ptr[4]);


    printf("The value of element 1 is %d\n",ptr[0]);

    free(ptr); // free de allocate the memory and store value also get de allocate...

    printf("The value of element 2 is %d\n",ptr[1]);

    printf("The value of element 3 is %d\n",ptr[2]);

    printf("The value of element 4 is %d\n",ptr[3]);

    printf("The value of element 5 is %d\n",ptr[4]);
    
    return 0;
}