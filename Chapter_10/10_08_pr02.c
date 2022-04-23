// Q2. Write a program to generate multiplication table of a given number in text format.
//     Make sure that the file is readable and well formatted...

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("table.txt","w");

    int n;

    printf("Enter the number:\n");
    scanf("%d",&n);

    fprintf(ptr, "\t\t\t\t\t\t\t\t\t.....THE MULTIPLICATION TABLE OF %d.....\n\n",n);
    for(int i = 0; i<10; i++){
        fprintf(ptr,"\t\t\t\t\t\t\t\t\t\t\t\t%d X %d is:- %d\n",n, i+1, n*(i+1));
    }
    fclose(ptr);
    return 0;
}