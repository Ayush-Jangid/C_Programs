//Q6. Write a program containing functions which counts the number of positive integers in an array.
#include <stdio.h>
 void count(int ar[]){
        int positive = 0;

for(int i = 0;i<10;i++){
    if(ar[i]>0)  positive++;
}
printf("\nPostive numbers: %d", positive);
    }
int main(){
   int array[10];

for(int i = 0;i<10;i++){
    printf("Enter the value: ");
    scanf("%d",&array[i]);
}
count(array);

    return 0;
}