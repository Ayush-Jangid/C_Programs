// Q8. Create a program to reverse a string...

#include <stdio.h>
#include <string.h>

int main(){
    char rev[999];
    
    printf("Enter something:\n");
    gets(rev);
   
    int size = strlen(rev);
    // printf("The size of entered word is %d\n",size);

    printf("\nThe reverse of %s is:-\n\n",rev);
    for(int i=size;i>0;i--){

        printf("%c",rev[i-1]);
    }
    printf("\n\n");
    return 0;
}