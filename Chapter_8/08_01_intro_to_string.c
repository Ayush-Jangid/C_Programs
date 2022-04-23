// STRING:- A string is a 1Dimensional character array terminated by a null ('\0')...
// Null charater refers the end of string...
#include <stdio.h>

int main(){

//char string[] = {'V','i','s','h','u', '\0'}; // '\0' refers the end of this string...

    char string[] = "Vishu";  // This is easy way and C compiler adds a null character automatically...

//  char *string  = "Vishu";  // We can use this also...

for(int i =0; i<5; i++){
    printf("%c",string[i]);
}

    return 0;
}