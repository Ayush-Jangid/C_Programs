//Q2. Write a function sumvector which returns the sum of two vectors passed to it.
//    The vectors must be two-dimensional...

#include <stdio.h>

typedef struct vector{
     float x;
     float y;
} vector;

vector sumvector(vector v1,vector v2){
             vector result;
             result.x = v1.x + v2.x;
             result.y = v1.y + v2.y;
             return result;
};

int main(){
    
 vector v1;
v1.x = 15;
v1.y = 5;

vector v2;
v2.x = 25;
v2.y = 10;

vector sum;
sum = sumvector(v1,v2);

printf("\nResult of x dimension = %.2f \n", sum.x);
printf("Result of y dimension = %.2f\n\n",sum.y);
    return 0;
}