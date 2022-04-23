#include <stdio.h>
// Write a program to convert celcius into fahrenheit // Formula  = (0°C × 9/5) + 32 = 32°F

float temprature(int celcius);
int main(){

    float temp;
    printf("Enter celcius \n");
    scanf("%f",&temp);

    printf("Fahrenheit: %f\n", temprature(temp));
    
    return 0;
}
float temprature(int celcius){
    float far;
    far = (celcius * 9/5) + 32;
  
}