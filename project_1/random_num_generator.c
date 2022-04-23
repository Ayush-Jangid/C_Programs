#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int number, guess;
    srand (time(0));
    number =rand()%100 +1; // Generates a random number between 1 and 100
    printf("The number is %d\n", number);
return 0; }