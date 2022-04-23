// Q3. Write a program to read a text file character by character and write its content twice in a separate file...

#include <stdio.h>

int main(){
    FILE  *ptr;
    FILE *ptr2;
    ptr = fopen("take.txt","r");
    
     ptr2 = fopen("print.txt","w");
    char c = getc(ptr);

    while(c!=EOF){

        fputc(c,ptr2); // Alternative:- fprintf(p,"%c",c);
        fputc(c,ptr2); // Alternative:- fprintf(p,"%c",c);

        c = fgetc(ptr);   
    }
    fclose(ptr);
    fclose(ptr2);

    return 0;
}