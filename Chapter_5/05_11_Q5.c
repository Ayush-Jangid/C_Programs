#include <stdio.h>
//Q.5 What will th following line produce in a C program:  printf("%d %d %d \n", a,++a,a++);


int main(){
    int a;
    a=3;
    printf("%d %d %d \n", a, ++a,a++); // Program runs arguments right to left in printf(); statement. //It depends on complier to complier..
    return 0;
}