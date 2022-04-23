// Q1. Write a program to read three integers from a file... 

#include <stdio.h>

int main(){
FILE *p;
int read;
int read2;
int read3;
p = fopen("10_07_pr01.txt","r");

fscanf(p, "%d %d %d", &read,&read2,&read3);

printf("The first integer is %d\n",read);
printf("The second integer is %d\n",read2);
printf("The third integer is %d\n",read3);

fclose(p);
return 0;
}