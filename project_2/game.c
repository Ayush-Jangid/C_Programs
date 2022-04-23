//                                ...ROCK, PAPER AND SCISSOR...

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// game function...
int game(char y, char c){
// Draw...
if(y == c){
   return 0;
}

// Computer's win situation...
if(y == 'r' && c == 'p'){
   return -1;
}
else if(y == 'p' && c == 's'){
   return -1;
}
else if(y == 's' && c == 'r'){
   return -1;
}
// Player's win situation...
if(y == 'r' && c == 's'){
   return 1;
}
else if(y == 'p' && c == 'r'){
   return 1;
}
else if(y == 's' && c == 'p'){
   return 1;
}


}

int main(){
    char you, comp;

//  Random number generator...
    srand(time(0));
    int num = rand()%100 + 1;

if(num < 33){
    comp = 'r';
}
else if (num>32 && num<66){
    comp = 'p';
}
else{
    comp = 's';
};

printf("Enter Your choice: r for rock , p for paper and s for scissor...\n");
scanf("%c",&you);

int result;

if(you == 'r' || you == 'p' || you == 's'){
result = game(you , comp);
}
else{
    printf("\n!INVALID CHOICE...\n\n");
    return 0;
};
printf("\nComputer chose %c and you chose %c. ", comp , you);

if(result == 0){
    printf("Its's a draw...\n\n");
}
else if(result == 1){
    printf("You Won...\n\n");
}
else{
    printf("Computer won...\n\n");
}

    

    return 0;
}