#include <stdio.h>

struct vector{

   float x;
   float y;
   float z;
};

void input(struct vector v){

printf("Enter the value of x\n"); 
scanf("%f",&v.x);
printf("Enter the value of y\n"); 
scanf("%f",&v.y);
printf("Enter the value of z\n"); 
scanf("%f",&v.z);
};


struct vector sumvector(struct vector v1,struct vector v2,struct vector v3){
    struct vector result;
    result.x = v1.x + v2.x + v3.x;
    result.y = v1.y + v2.y + v3.y;
    result.z = v1.z + v2.z + v3.z;
    return result;
};


int main(){
    
struct vector v1,v2,v3,sum;



input(v1);
input(v2);
input(v3);

v1.x;
v1.y;

v2.x;
v2.y;
sum = sumvector(v1,v2,v3);

printf("\nThe sum of x dimension is %.2f\n" ,sum.x);
printf("\nThe sum of y dimension is %.2f\n" ,sum.y);
printf("\nThe sum of z dimension is %.2f\n" ,sum.z);
    return 0;
}