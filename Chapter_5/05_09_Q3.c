#include <stdio.h>
// Write a program to calculate force of attraction on a body of mass m exerted by earth(g = 9.8/msquare)...

float force(float mass);
int main(){
    float m;
    printf("Enter the value of mass in kgs \n");
    scanf("%f", &m);

    printf("The value of force in newton is %.0f\n", force(m)); //  to set the quantity of decimals like %.2f = 2 zero after decimal
                                                                //  %.1f = 1 decimal as well as %.0f = 0 decimal...
    return 0;
}
float force(float mass){
float result;
result = mass * 9.8;
return result;
}