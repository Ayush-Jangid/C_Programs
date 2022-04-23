#include <stdio.h>

int main(){
    char string[5];

    printf("Enter your full name\n");
    
    gets(string); // use gets for input...
    puts(string); // use puts for output...

    // printf("Your name is %s\n",string);
    return 0;
}