#include <stdio.h>

int main(){
    
FILE *p;
char a[12];
p = fopen("getputc.txt","r");

// char c = fgetc(p); // This will print the first letter again and again...
// printf("The first word is %c\n", c);
// printf("The first word is %c\n", c);

//                   PRINT  USING fgetc(p);
printf("%c\n", fgetc(p));// This  will print word by word...
printf("%c\n",fgetc(p));// This  will print word by word... 
printf("%c\n",fgetc(p)); // This  will print word by word...
printf("%c\n",fgetc(p));// This  will print word by word...
fclose(p);
    return 0;
}