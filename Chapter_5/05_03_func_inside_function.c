#include <stdio.h>
//  Write a program with 4 functions...

void morning();
void afternoon();
void evening();
void night();

int main(){
morning();
 
    return 0;
}

void morning(){
    printf("Good Morning\n");
    afternoon();
}
void afternoon(){
    printf("Good Afternoon\n");
    evening();
}
void evening(){
    printf("Good Evening\n");
    night();
}
void night(){
    printf("Good Night\n");
}