// Q5. Write a program to modify a file contaning an integer to double its value...

#include <stdio.h>

int main(){
    FILE *modify;
    FILE *modifier;
    int num;

modify = fopen("modifyme.txt","r");
fscanf(modify,"%d",&num);
printf("The number in this file is: %d\n",num);

modifier = fopen("modifyme.txt","w");
fprintf(modifier,"%d",2*num);

printf("\nYeahhh,Your number got double in that file...\n");
    return 0;
}