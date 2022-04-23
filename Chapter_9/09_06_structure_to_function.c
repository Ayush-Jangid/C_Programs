#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[15];
};

void show (struct employee e){
printf("\nThe name of the employee is = %s\n",e.name);
printf("The code of the employee is = %d\n",e.code);
printf("The salary of the employee is = %f\n\n",e.salary);

e.code = 98; // Value will not change...
};

int main(){
    
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    strcpy(ptr->name,"Visu");
    ptr->code = 43;
    ptr->salary = 99000;
     
     show(e1);
printf("%d\n",e1.code); 

struct employee e2;
strcpy(e2.name,"Gotiya");
e2.code = 5;
e2.salary = 88000;

show(e2);
    return 0;
}