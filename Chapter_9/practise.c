#include <stdio.h>

struct students {
    int rollno;
    float marks;
    char name[15];
    int class;
};

void print(struct students s){

    printf("Enter name:\n");
    scanf("%s",s.name);

    printf("Enter class\n");
    scanf("%d",&s.class);

    printf("Enter rollno\n");
    scanf("%d",&s.rollno);

    printf("Enter marks\n");
    scanf("%f",&s.marks);

printf("\nThe name of student is %s\n",s.name);
printf("Class = %d\n",s.class);
printf("Roll.no of %s is: %d\n",s.name,s.rollno);
printf("Marks of %s is: %.2f\n",s.name,s.marks);
printf("\n");
};

int main(){
    struct students s1,s2,s3;


    print(s1);
    print(s2);
    print(s3);
    return 0;
}