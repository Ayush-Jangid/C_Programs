// Q4. Create an array  of multiplication table of 7 upto 10(7 X 10 = 70).
//     Use realloc function (from 7 X 1 to 7 X 15);

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 7;
    int *ptr;
    ptr = (int*) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7 *(i+1);
        printf("%d X %d = %d\n", n, i+1 , ptr[i]);
    }

    ptr = realloc(ptr, 15* sizeof(int));
    printf("\n...AFTER RE-ALLOCATE...\n\n");
        for (int i = 0; i < 15; i++)
    {
        ptr[i] = 7 *(i+1);
        printf("%d X %d = %d\n", n, i+1 , ptr[i]);
    }
    return 0;
}