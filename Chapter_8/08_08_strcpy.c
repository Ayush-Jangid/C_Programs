// strcpy:- This function is used to copy the content of second string into the first string passed to it...
#include <stdio.h>
#include <string.h>

int main(){
             char *source = "COPIED";
             char target[15];

             strcpy(target,source);

             printf("The value of target string after copying is = %s",target);
    return 0;
}