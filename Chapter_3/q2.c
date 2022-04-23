#include <stdio.h>

int main()
{

    int num, num2, num3, num4;

    printf("Enter first number\n");
    scanf("%d", &num);

    printf("Enter second number\n");
    scanf("%d", &num2);

    printf("Enter third number\n");
    scanf("%d", &num3);

    printf("Enter fourth number\n");
    scanf("%d", &num4);

     if(num>num2 && num>num3 && num>num4 ){

printf("The First number is greatest among all");
 }

if(num2>num && num2>num3 && num2>num4 ){

printf("The second number is greatest among all");
 }
 if(num3>num && num3>num2 && num3>num4 ){

printf("The third number is greatest among all");
 }
 if(num4>num && num4>num3 && num4>num2 ){

printf("The Fourth number is greatest among all");
 }
    return 0;
}