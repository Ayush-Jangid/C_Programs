//Q4. Write a program to illustrate the use of arrow operator -> in C...

#include <stdio.h>
#include <string.h>
struct students {
int rollno;
float marks;
char name[15];
};
int main(){
    
struct students s1;
struct students *ptr;

ptr = &s1;

strcpy(ptr->name,"Gotiyaa");
       ptr->rollno = 42;
       ptr->marks = 50000;

printf("\nName of student is %s\n",ptr->name);
printf("Rollno of student is %d\n",ptr->rollno);
printf("Marks of student is %.2f\n\n",ptr->marks);
    return 0;
}