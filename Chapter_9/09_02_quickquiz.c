// Quiz:- Write a program to store the details of 3 employees from user defined data.
#include <stdio.h>
#include <string.h>

struct employee{
int code;
float salary;
char name[15];
};

int main(){

struct employee e1,e2,e3;
printf("Enter Name: \n");
scanf("%s",e1.name);
printf("Enter code of %s\n",e1.name);
scanf("%d",&e1.code);
printf("Enter salary of %s\n",e1.name);
scanf("%f",&e1.salary);
printf("\n");

printf("Enter Name: \n");
scanf("%s",e2.name);
printf("Enter code of %s\n",e2.name);
scanf("%d",&e2.code);
printf("Enter salary of %s\n",e2.name);
scanf("%f",&e2.salary);
printf("\n");

printf("Enter Name: \n");
scanf("%s",e3.name);
printf("Enter code of %s\n",e3.name);
scanf("%d",&e3.code);
printf("Enter salary of %s\n",e3.name);
scanf("%f",&e3.salary);

printf("Name = %s\n",e1.name);
printf("Name = %d\n",e1.code);
printf("Name = %.2f\n",e1.salary);
printf("\n");

printf("Name = %s\n",e2.name);
printf("Name = %d\n",e2.code);
printf("Name = %.2f\n",e2.salary);
printf("\n");

printf("Name = %s\n",e3.name);
printf("Name = %d\n",e3.code);
printf("Name = %.2f\n",e3.salary);

    return 0;
}