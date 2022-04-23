// Q4. Take name and salary of two employees as input from the user and write them to a text file in the following format:
//                                 name1, 3300.00
//                                 name2, 7700.00

#include <stdio.h>

typedef struct emp {
    char name[25];
    float salary;
} emp;

int main(){
    FILE *ptr;
    ptr = fopen("employee.txt","w");

    emp e1;
    printf("Enter the name of first employee:\n");
    gets(e1.name);

    printf("Enter the salary of %s:\n",e1.name);
    scanf("%f",&e1.salary);
    printf("\n");

//////////////////////////////////////////////////////////////////////////////////

    emp e2;
    printf("Enter the name of second employee:\n");
    scanf("%s",e2.name);

    printf("Enter the salary of %s:\n",e2.name);
    scanf("%f",&e2.salary);

fprintf(ptr,"%s,",e1.name);
fprintf(ptr," %.2f",e1.salary);
fprintf(ptr,"\n");
fprintf(ptr,"%s,",e2.name);
fprintf(ptr," %.2f",e2.salary);

fclose(ptr);

    return 0;
}