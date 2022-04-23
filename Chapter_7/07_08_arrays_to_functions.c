#include <stdio.h>

// void printarr(int *pointer, int n){
// for(int i=0; i<n; i++){
// printf("The value of element %d is %d \n", i+1,*pointer+i); // if we don't use * it will print address...
//     }
// }

void printarr(int printer[], int n){
for(int i=0; i<n; i++){
printf("The value of element %d is %d \n", i+1,printer[i]); // if we don't use * it will print address...
    }
    printer[3]=9; // This value will be change in main as well...
}

int main(){
int array[]= {3,4,5,6,7};

printarr(array,5);

printf("The value is %d \n", array[3]);
    return 0;
}