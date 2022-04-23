#include <stdio.h>

int main()
{
int no_schools = 2;
int no_students = 2;
int no_subjects = 3;

int marks[2][2][3]; // This is a 3Dimensional loop...

for (int i = 0; i < no_schools; i++)
{

for (int j = 0; j < no_students; j++)
{
for (int s = 0; s < no_subjects; s++)
{
printf("Enter the marks of student(%d) in Subject(%d) of School(%d)\n", j + 1, s + 1, i + 1);
scanf("%d", &marks[i][j][s]);
}
}
}

for (int i = 0; i < no_schools; i++)
{

for (int j = 0; j < no_students; j++)
{
for (int s = 0; s < no_subjects; s++)
{
printf("Marks of student(%d) in Subject(%d) of School(%d) is: %d\n", j + 1, s + 1, i + 1, marks[i][j][s]);
}
}
}
return 0;
}