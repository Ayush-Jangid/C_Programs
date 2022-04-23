#include <stdio.h>

void strleng(char *stg){
     int i=0;
     char c;
     int count;
     printf("Enter:-\n");
     while(c!='\n'){
     scanf("%c",&c);
     count++;
     stg[i] = c;
     i++;
     }
     printf("The Length Of This String Is:- %d\n",count-1);
}

int main(){
    char str[15];

    strleng(str);

    // int a = strlen(str);
    
    // printf("Letters:- %d",a -1);
    return 0;
}