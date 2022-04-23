#include <stdio.h>
#include <string.h>

struct employee
{
  int code;
  float salary;
  char name[15];
};

int main(){
    
struct employee Number[50];

strcpy(Number[0].name,"Bheema");
Number[0].code = 55;
Number[0].salary = 77000.44;

strcpy(Number[1].name,"Gotiyaa");
Number[1].code = 25;
Number[1].salary = 80000.56;

strcpy(Number[2].name,"Sunil");
Number[2].code = 86;
Number[2].salary = 90000.78;

strcpy(Number[3].name,"Miniyaa");
Number[3].code = 46;
Number[3].salary = 100000.36;

printf("\n");
printf("Name = %s\n",Number[0].name);
printf("Code of %s = %d\n",Number[0].name,Number[0].code);
printf("Salary of %s is = %.2f\n",Number[0].name,Number[0].salary);
printf("\n");

printf("Name = %s\n",Number[1].name);
printf("Code of %s = %d\n",Number[1].name,Number[1].code);
printf("Salary of %s is = %.2f\n",Number[1].name,Number[1].salary);
printf("\n");

printf("Name = %s\n",Number[2].name);
printf("Code of %s = %d\n",Number[2].name,Number[2].code);
printf("Salary of %s is = %.2f\n",Number[2].name,Number[2].salary);
printf("\n");

printf("Name = %s\n",Number[3].name);
printf("Code of %s = %d\n",Number[3].name,Number[3].code);
printf("Salary of %s is = %.2f\n",Number[3].name,Number[3].salary);

    return 0;
}