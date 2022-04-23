#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    
    printf("Enter the amount of integers to want to enter\n");
    scanf("%d",&n);

    float *ptr;
    ptr = (float *) calloc(n , sizeof(float));

    for(int i = 0; i<n; i++){
        printf("Enter the value of element %d\n",i+1);
        scanf("%f",&ptr[i]);
    }

    for(int i = 0; i<n ; i++){
        printf("The value of element %d is %.2f\n",i+1, ptr[i]);
    }
    return 0;
}