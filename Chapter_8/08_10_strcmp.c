// strcmp:- This function is used to compare two strings. It returns: 0 if strings is equal.
//          Negative value if first string's mismatching character's ASCII value  is not greater
//          than second string's corresponding mismatching character. It returns positive values otherwise...ss
#include <stdio.h>
#include <string.h>
int main(){
    char str[]= "vik"; // ASCII value of k - ASCII value of s
    char *stg = "vis"; //          107 - 115 = -8 Minus value = -1 as result

    int value = strcmp(str,stg);

    printf("The value is %d\n",value);
    return 0;
}