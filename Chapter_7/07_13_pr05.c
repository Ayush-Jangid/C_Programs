//Q5. Write a program containing a function which reverses the array passed to it...
#include <stdio.h>

    void reverse(int ar[], int n){
        int swap;
        for(int i=0;i<(n/2);i++){    // (n/2) is because if the loop runs completely ary will reverse 2 times...

            swap = ar[i];       //     swap = element1
            ar[i] = ar[n-i-1];  // element1 = element5  
          ar[n-i-1] = swap;     // element5 = swap
        }                        
    }

int main(){
     int ary[]={3,6,2,7,9};
     reverse(ary,5);

 for(int i=0;i<5;i++){
     printf("The value of element %d is %d \n", i+1, ary[i]);
 }
    return 0;
}