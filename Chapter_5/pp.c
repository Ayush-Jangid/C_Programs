#include <stdio.h>
int sum(int a, int b){
     int result = a+b;
}
int main(){
    int answer;
int first;
int second;

printf("Enter the value of first number\n");
scanf("%d",&first);

printf("Enter the value of second number\n",second);
scanf("%d",&second);

 answer = sum(first, second);

 printf("Sum is  = %d\n", answer);
    return 0;
}