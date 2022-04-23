#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[15];
};

int main(){
    
struct employee gotiyaa = {22,77000, "Gotiyaa"};


printf("\nName = %s \n",gotiyaa.name);
printf("Code of %s is = %d \n",gotiyaa.name,gotiyaa.code);
printf("Salary of %s is = %.2f \n\n",gotiyaa.name,gotiyaa.salary);
    return 0;
}