#include <stdio.h>
//Q6. Try problem using call by value and verify that it doesn't change the value of the said variable...

//Problem3:= Write a program to change the value of a variable to ten times of its current value
//           Write a function and pass the value by reference...

int ten(int a){
      int tenn = a*10;
     return tenn;
}
int main(){
    int i=5;
  ten(i);

  printf("Now the value of i is %d\n", i);

    return 0;
}