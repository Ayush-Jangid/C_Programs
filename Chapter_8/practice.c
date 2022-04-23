#include <stdio.h>
void strlength(char*stg){
            int count;

            while(*stg!='\0'){
                count++;
                stg++;
            }
            printf("Letters:- %d",count);
}

int main(){
    char str[45];
    printf("Enter\n");
    gets(str);

    int a = strlength(&str[0]);

    return 0;
}