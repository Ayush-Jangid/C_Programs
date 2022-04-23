//Q3. Write a program to change the value of a variable to ten times of its current value.
//    Write a function and pass the value by reference...
#include <stdio.h>

int ten(int *a){
    return *a * 10;
     
}
int main(){
    int n=8;       
 
   
       printf("Ten times the value of n is %d\n",  ten(&n));

    return 0;
}