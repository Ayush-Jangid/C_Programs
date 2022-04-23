#include <stdio.h>

struct vector {
    int x;
    int y;
};

void input(struct vector v){

printf("\nEnter the value of x\n");
scanf("%d",&v.x);
printf("Enter the value of y\n");
scanf("%d",&v.y);
printf("\n");
}

struct vector sumvector(struct vector v1,struct vector v2) {
struct vector result;
result.x = v1.x + v2.x;
result.y = v1.y + v2.y;
return result;

};



int main(){
    
struct vector v1,v2,sum;

v1.x;
v1.y;

v2.x;
v2.y;

input(v1);
input(v2);

sum = sumvector(v1,v2);

printf("\nThe sum of x dimension is %d\n", sum.x);
printf("The sum of y dimension is %d\n\n",sum.y);

    return 0;
}