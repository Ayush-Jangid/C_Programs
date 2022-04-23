#include <stdio.h>

int main(){
    int no_students = 2;
    int no_subjects = 3;

    int marks[2][3];  // This is a 2Dimensional loop...

    for(int i=0;i<no_students;i++){

        for(int j=0; j<no_subjects;j++){
         printf("Enter the marks of student(%d) in Subject(%d)\n",i+1,j+1);
         scanf("%d",&marks[i][j]);
        }
    }

        for(int i=0;i<no_students;i++){

        for(int j=0; j<no_subjects;j++){
         printf("Marks of student(%d) in Subject(%d) is: %d\n",i+1,j+1,marks[i][j]);
        }
    }
    return 0;
}