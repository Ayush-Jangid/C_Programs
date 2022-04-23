//                               typedef

// Typedef:- We can use the typedef keyword to create an alices(nickname) name for data types
//           in C. typedef is more commonly used with structures...

#include <stdio.h>
#include <string.h>
typedef struct students // Declaring typedef function.
{
    int rollno;
    float marks;
    char name[15];
} stds;                 // Declaring stds; 

void print(struct students s){

printf("\n%s\n",s.name);
printf("%d\n",s.rollno);
printf("%.2f\n\n",s.marks);

};

int main(){
//  struct students s1;
    stds s1; // We replaced (stds) with (struct students) using typedef fuction...
    stds *ptr;

    ptr = &s1;
    strcpy(ptr->name,"Gotiyaa");
    ptr->rollno = 27;
    ptr->marks = 95.34;

print(s1);

    return 0;
}