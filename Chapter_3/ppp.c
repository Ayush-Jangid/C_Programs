#include <stdio.h>
/* 
Q3. Calculate imcome tax paid by an employee to the government as per the slabs mentioned below:

                     INCOME SLAB                 TAX
                     Below 2.5L                   0%
                     2.5L - 5.0L                  5%
                     5.0L - 10.0L                 20%
                     Above 10.0L                  30%

*/
float main(){
   float income, tax;
    printf("Enter Income\n");
    scanf("%f",&income);
tax = 0;

    if(income>250000 && income<=500000){
        tax = tax + 0.05 * (income - 250000);
}
if(income>500000 && income<=1000000){
        tax = tax + 0.20 * (income - 500000);
}
        if(income >= 1000000){
        tax = tax + 0.30 * (income - 1000000);}

        printf("Your net income tax to be paid this month is %f\n", tax);
    return 0;
}