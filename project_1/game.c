#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int number, guess , nguess=1;
    srand (time(0));
    number =rand()%100 + 1; // Generates a random numver between 1 and 100
   // printf("The number is %d\n", number);
    //Keep running the loop until the number is guessed



    do{
              printf("Guess the between 1 and 100\n");
              scanf("%d",&guess); 
              if(guess>number){
                  printf("\nLower number please! \n");
              }
              else if(guess<number){
                  printf("\nHigher number please\n");
              }
              else{
                printf("\nYou guessed it in %d attemps \n", nguess);
              }nguess++;
    }
    while(guess!=number);
    return 0;
}
