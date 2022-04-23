//                              STRUCTURE

// Structure:- A structure in C is a collection of variables of different types under a single
//             name.
#include <stdio.h>
#include <string.h>
    struct student{
           int rollno;
           float marks;
           char name[15];
    };

int main(){

struct student s1;
   s1.rollno = 14;
   s1.marks = 92.45;
// s1.name = "Vishu";  // Won't work without student structure...
   strcpy(s1.name,"Vishuu");

printf("Rollno %d\n",s1.rollno);
printf("Marks %.2f\n",s1.marks);
printf("Name %s\n",s1.name);


    return 0;
}

/*                      ...WHY USE STRUCTURE...

We can create data types in the student structure seprately but when the number of properties
in a structure increases, it becomes difficult for us to create the data variables without
strutures. In a nut shell:

1. Structure keep the data organized...

2.Strutures make data management easy for the programmer...

*/