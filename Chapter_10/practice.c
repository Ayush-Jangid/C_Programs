#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[35];
};


int main(){
    
    struct employee e1;

printf("Enter name:\n");
gets(e1.name);

printf("Enter code\n");
scanf("%d",&e1.code);

printf("Enter salary:\n");
scanf("%f",&e1.salary);
  
    printf("Name = %s\n",e1.name);
    printf("Code = %d\n",e1.code);
    printf("Salary = %.2f\n",e1.salary);
    return 0;
}