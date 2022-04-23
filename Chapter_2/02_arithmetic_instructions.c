#include <stdio.h>
#include <math.h>
int main()
{
  int a = 4;
  int b = 8;

  printf("The value of a + b is %d \n", a + b);
  printf("The value of a - b is %d \n", a - b);
  printf("The value of a * b is %d \n", a * b);
  printf("The value of a / b is %d \n", a / b);

  int z;
  z = b * a; // legal
  // b * a = z // illegal
  printf("The value of z is %d \n", z);

  // Use % for remainder for eg. 5%2 = 1 remainder

  printf("When 5 is divided by 2 it's leave a remainder of %d \n", 5%2);
  printf("When -5 is divided by 2 it's leave a remainder of %d \n", -5%2);
  printf("When 5 is divided by -2 it's leave a remainder of %d \n", 5%-2);

  // No Operator Assumed to be present
  // printf("The value of 4 * 5 is %d \n", (4)(5)); //Wrong way
  printf("The value of 4 * 5 is %d \n", (4)*(5));  //Right ways
  

// There is no operator to perform exponentiations in C
printf("The value of 4 ^ 5 is %d \n", 4^5); // ^ Will no produce 4 to the power 5
printf("The value of 3 to the power 2 is %f \n", pow(3 , 2));  //Right way   Use commanD #include<math.h>

                   // IMPORTANT

printf("The value of 6 + 5 is %d\n",6 + 5);
printf("The value of 6 + 5.6 is %f\n",6 + 5.6); // int + float = float(%f)

printf("The value of 5/2 is %d\n",5/2);  // value is 2 
printf("The value of 5.0/2.0 is %f\n",5.0/2.0); 
printf("The value of 2/5 is %d\n",2/5); // value is 0


/*Note  (Not Recommended) Dont't do like that

int a = 3.5;  In this case 3.5(float) will be demoted to 3(int)
               because a is not able to store the floats.

float a = 8   a will store in 8.0
              8 = 8.0 (promotion to float)  */





  return 0;
}