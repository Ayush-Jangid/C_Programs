//Q2. Write a program having a variable i. Print the address of i.
//    pass the variable  to a function and print its address. Are these addresses same?
//    Why?

#include <stdio.h>
void display(int n){
    printf("The address of a is %u\n",&n);
}
int main(){
    int i = 5;
    
    printf("The address of i is %u\n",&i);

    display(i);
// The address of i and i after passing to void function is not same because we passed value not address...
    return 0;
}
