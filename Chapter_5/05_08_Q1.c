#include <stdio.h>
// Average of 3 numbers using functions...

float number(int a, int b, int c);

int main(){
    int x,y,z;
printf("Enter the value of x \n");
scanf("%d",&x);

printf("Enter the value of y \n");
scanf("%d",&y);

printf("Enter the value of z \n");
scanf("%d",&z);

printf("The average of x, y and z is %f \n", number(x,y,z));
    
    return 0;
}
float number (int a, int b, int c){
   float average;
    average = (float)(a+b+c)/3; // Typecasting float to get exact answer bcz the number is in integer...
    return average;
}