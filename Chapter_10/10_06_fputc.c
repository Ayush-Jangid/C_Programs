#include <stdio.h>

int main(){
    
FILE *pointer;

pointer = fopen("putcgen.txt","w");

// This will print character by character in generated file (putcgen.txt)...

fputc('I',pointer);
fputc(' ',pointer);
fputc('a',pointer);
fputc('m',pointer);
fputc(' ',pointer);
fputc('h',pointer);
fputc('e',pointer);
fputc('r',pointer);
fputc('e',pointer);
fputc('.',pointer);
fclose(pointer);
    return 0;
}