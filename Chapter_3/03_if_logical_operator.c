//                                   LOGICAL OPERATORS
#include <stdio.h>


   /*
          PRIORITY     OPERATOR
          1st            !
          2nd           *,/ and %
          3rd               + and -
          4th               <,>,<= and >=
          5th              ==,!=
          6th                &&
          7th                ||
          8th                =
    
    
    */

/*
&& means And , is true when both the conditions are true
     1 means true and 0 means false

           0 and 1 is evaluated as false
           0 and 0 is evaluated as false
           1 and 1 is evaluated as true

           || means OR , is true when at least one of the conditions is true. (1 or 0 = 1) (1 or 1 = 1)

           ! This operator reverse the statement. It turns true into false and false into true...
*/
int main(){
    int age;
    int vipPass =0;
    //vipPass = 1;        // 1 turns the statement true 
    printf("Enter your age\n");
    scanf("%d", &age);

    

  // if(age <= 70 && age>=18)
  // if((age <= 70 && age>=18) || !vipPass==1)  // '!' its turns the statement reverse
 if((age <= 70 && age>=18) || vipPass==1)
        {
        printf("You can drive\n");
    }

    else
    {
        printf("You cannot drive\n");
    }
 
    if (age == 50)
    {
        printf("HALF CENTURY\n");
    }

    return 0;
}