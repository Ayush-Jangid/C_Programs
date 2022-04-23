#include <stdio.h>

int main(){
    int n;
     printf("Enter the value \n");
     scanf("%d",&n);

// Run this loop n times...
     for(int i=0;i<n;i++){
 
// print(i+1) stars...
 for(int c=0;c< i+1; c++){
     printf("*");

 }
printf("\n");
     }
    
    return 0;
}