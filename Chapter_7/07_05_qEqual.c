#include <stdio.h>

int main(){
    int i,j;
int *ptr = &i;
int *p = &j;

printf("The address of j is %u\n", p);
p++;
p++;
printf("The address of j is %u\n", p);
++ptr;
printf("The address of i is %u\n", ptr);


    return 0;
}