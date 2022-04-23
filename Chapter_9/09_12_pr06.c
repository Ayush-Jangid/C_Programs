//Q6. Create an array of 5 Complex numbers created in problem 5 and display then with
//    the help of a display function. The values must be taken as an input from the user...

#include <stdio.h>

struct complex {
    float real;
    float img;
};

void display(struct complex c){
printf("\nThe value of real number is %.2f\n", c.real);
printf("The value of imaginary number is %.2f\n\n", c.img);
};

int main(){
    
struct complex cmp[5];

for(int i = 0; i<5; i++){

printf("\nEnter the value of Real number%d\n",i+1);
scanf("%f", &cmp[i].real);

printf("Enter the value of Imaginary number%d\n",i+1);
scanf("%f", &cmp[i].img);
printf("\n");
};

for(int i =0;i<5;i++){
    display(cmp[i]);
};
    return 0;
}