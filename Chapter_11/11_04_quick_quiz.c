// Quiz. Write a program to create an array of size n using malloc where n is an integer entered by the user...

#include <stdio.h>
#include <stdlib.h>

int main(){
int n;

printf("Enter the amount of array you to want to create\n");
scanf("%d",&n);

int * ptr;
ptr = (int*) malloc(n * sizeof(int));

for (int i = 0; i < n; i++)
{
    printf("Enter the value of ptr[%d]:-\n",i);
    scanf("%d",&ptr[i]);
}

for(int i = 0; i<n; i++){
    printf("The value of ptr[%d] is:- %d\n", i , ptr[i]);
}


    return 0;
}