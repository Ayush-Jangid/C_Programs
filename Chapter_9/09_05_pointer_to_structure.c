#include <stdio.h>
#include <string.h>

struct employee
{
int code;
float salary;
char name[15];
};

int main(){
    
struct employee e1;
struct employee *ptr;

ptr = &e1;
//(*ptr).code = 49; // You can also use this:-  ptr->code = 101;

ptr->code = 101;  //   we can use * or ->

printf("\nCode = %d\n\n", e1.code);
    return 0;
}