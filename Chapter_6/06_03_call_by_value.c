#include <stdio.h>
// Call by value:-     Sending the value of arguments...
int sum(int x, int y){
      int c;
       c = x+y;
       x =1000;
       y = 500;
       return c;      // This will not print x+y , a+b will be print...
      // return x + y;  // This will gave us result as 1500...
}
int main(){
    int a =5;
    int b =10;

printf("The sum of a and b is %d\n", sum(a,b));
    return 0;
}