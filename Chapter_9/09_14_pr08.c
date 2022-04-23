// Q8. Create a structure representing a bank account of a customer. What fields did you use and why???
#include <stdio.h>
#include <string.h>

typedef struct customer{

char name[15];
int AccNo;
float bankbalance;
} ctm;



int main(){
    
ctm c1;

printf("Enter name\n");
scanf("%s",&c1.name);

printf("Enter Account Number of %s\n",c1.name);
scanf("%d",&c1.AccNo);

printf("Enter Bank Balance of %s\n",c1.name);
scanf("%f",&c1.bankbalance);

printf("\nName = %s\n", c1.name);
printf("Account number of %s is: %d\n", c1.name, c1.AccNo);
printf("Bank Balance of %s is: %.2f\n\n", c1.name , c1.bankbalance);

    return 0;
}