//Q4. Repeat problem 3 for a general input provided by user using scanf...

//Problem 3:- // Write a program to create an array of 10 integers and store multiplication table of 5 in it...

#include <stdio.h>

int main(){
    int mul[10];
    int n;

printf("Enter the number:\n");
scanf("%d",&n);


    for(int i = 0; i<10; i++){
            mul[i]= n*(i+1);
    }
      for(int i = 0; i<10; i++){
          printf("%d X %d is %d\n",n,i+1,mul[i]);
    }
    return 0;
}