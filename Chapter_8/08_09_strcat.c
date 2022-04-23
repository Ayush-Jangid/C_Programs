// stgcat:- This function is used to merge two strings...
#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "KIT";
    char *stg = "KAT";

    strcat(str,stg);

    printf("Now the value of str is:- %s",str);
    return 0;
}