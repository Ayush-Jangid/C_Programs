#include <stdio.h>

int main(){
    FILE *reader;
    reader = fopen("sample.txt","r");

    char c;

    while(c!=EOF){
        printf("%c",c);
        c = getc(reader);
    }
    return 0;
}