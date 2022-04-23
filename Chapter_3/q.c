#include <stdio.h>
//  Write a program to find whether a year entered by the user is a leap year or not.
//  Take years as an input from the user...
int main(){
 int year ,leap;


 printf("Enter Year \n");
 scanf("%d", &year);



if(year%4 == 0){

printf("This is a leap year");

}
else{

    printf("This is not a leap year");
}
    return 0;
}