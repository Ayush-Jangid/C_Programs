//                                           FILE WRITING
#include <stdio.h>

int main(){
    
FILE *p;
int n = 1500;
p = fopen("generated.txt","w"); // This will automatically generate a new file(generated.txt)...

// All the content below will print in generated.txt file after compiling the program...

fprintf(p,"The number is %d\n",n);
fprintf(p,"I was printed here by using fprintf\n");
fprintf(p,"I will not print anything after this\n");
fclose(p);
    return 0;
}