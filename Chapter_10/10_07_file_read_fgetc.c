#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("read.txt","r");
    int a = 1;
    char c;

//                               ...FIRST METHOD...

while(1){  // while(1) = endless loop...
    printf("%c",c);
    c = fgetc(ptr);
    if(c == EOF){ // EOF = END OF FILE... EOF is a constant...
        break;
    }
}
fclose(ptr);
//                              ...SECOND METHOD...

    // while(c != EOF){ // EOF = END OF FILE... EOF is a constant...
    //     printf("%c",c);
    //     c = fgetc(ptr); 
    // }
    // fclose(ptr);
    return 0;
}