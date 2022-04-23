#include <stdio.h>

int main(){
    int a;
    
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("\n");

    int *pointer;
    pointer = &a;

printf("The value of a is %d\n", a);
printf("The address of a %u\n",&a);
printf("\n");

printf("Enter the value a is %d\n", *(&a));
printf("\n");

printf("The adress of a is %u\n", pointer);
printf("The value of a is %d\n",*pointer);
printf("\n");

printf("The adress of pointer is %u \n", &pointer);
printf("The value of pointer is %d \n", *(&pointer));
printf("\n");

printf("The value of pointer is %u \n", &*(&pointer)); // This is only for fun...
printf("\n");

printf("The value of pointer is %u \n", *(&*(&pointer))); // This is only for fun...
    return 0;
}