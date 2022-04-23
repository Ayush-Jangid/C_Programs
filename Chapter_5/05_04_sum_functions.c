#include <stdio.h>
// sum is a function which take a and b as input and returns an integer as output...
int sum(int a , int b ); // function prototype...



int main(){
    int c;
  c = sum(15,4); // function call // The actual value given by like 15 and 4 called arguments...
printf("The  value of c is %d \n", c);  //  a and b are aparameter...
    return 0;
}

int sum(int a , int b ){
 int answer;
 answer = a+b;
 // return answer;


}