// Q5. Attempt problem 4 using calloc()...

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    arr = (int*) calloc(5 , sizeof(int));

    for(int i = 0 ; i < 5; i++){
        printf("Enter the value of arr[%d]\n",i);
        scanf("%d",&arr[i]);
    }
    
    arr = realloc(arr, 10 * sizeof(int));
    printf("\n.....Now Enter The New Values.....\n\n");

    for(int i = 0 ; i < 10; i++){
        printf("Enter the value of arr[%d]\n",i);
        scanf("%d",&arr[i]);
    }
        for(int i = 0 ; i < 10; i++){
        printf("Enter the value of arr[%d] is %d\n",i , arr[i]);
    }
    return 0;
}