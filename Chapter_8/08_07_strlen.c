// strlen: This function is used to count the number of characters in the string excluding the null ('\0') character...
#include <stdio.h>
#include <string.h>

int main(){
    char *stg = "helllllloww";
    int a = strlen(stg);

    printf("The length of string is %d", a);
    return 0;
}