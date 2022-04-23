#include <stdio.h>
void wrongswap(int m,int n);

void swap(int *a, int *b){  // I am using void instead of int because we don't need return value...
    int swapper;
    swapper = *a;
    *a = *b;
    *b = swapper;
}

int main(){
    int x=10;
int y=5;
   
printf("The vlaue of x and y before swapping is %d and %d\n", x,y);
printf("\n");

//wrongswap(x,y) This will not work due call by value...

swap(&x,&y); // This works due to call by reference...


printf("The vlaue of x and y before swapping is %d and %d\n", x,y);
    return 0;
}
void wrongswap(int m, int n){
    int swapp;
    swapp = m;
    m = n;
    n = swapp;
}