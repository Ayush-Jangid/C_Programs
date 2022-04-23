#include <stdio.h>
/*
Q1. Write a program to find out whether a student
    is  pass or fail if it requires total 40% and 
    at least 33% in each subject to pass.Assume 3
    subjects and take marks as an input program...
*/
int main() {
int physics, chemistry, maths;
int total = physics + maths + chemistry;


printf("Enter Physics Marks\n");
scanf("%d", &physics);
printf("Enter Chemistry Marks\n");
scanf("%d", &chemistry);

printf("Enter Maths Marks\n");
scanf("%d", &maths);

printf("Total marks %d\n",physics + chemistry + maths);

if(physics<33 ||maths<33 || chemistry<33 || total<40){

printf("Your total percentage is %d and you are failed\n" ,(physics + chemistry + maths)/3);
}

else{
    printf("Your percentage is %d and you are pass\n", (physics + chemistry + maths)/3);
}






   return 0; 
}