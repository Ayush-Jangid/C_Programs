#include <stdio.h>

void strlength(char *stg){
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
     printf("%d\n\n",count-1);
}

int main(){
    char str[23];

    strlength(str);



    // int a = strlen(str);
    
    // printf("Letters:- %d",a -1);
    return 0;
}