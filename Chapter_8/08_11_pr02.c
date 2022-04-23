// Q2. Write a program to take string as an input from the user using %c and %s.
//     Confirm that the strings are eqaul...
#include <stdio.h>

int main(){
    char stg[20];
    char str[34];
    char c;
    int i =0;

    printf("Enter the value of first string\n");
    scanf("%s",stg);
    

    printf("Enter the value of second string\n");
    
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
       str[i] = c;
        i++;
    }


  printf("The value of first string is:- %s\n", stg);
  printf("The value of second string is:- %s\n",str);

    return 0;
}