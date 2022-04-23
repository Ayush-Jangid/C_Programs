//                          ELSEIF
#include <stdio.h>

/* Don't use 'elseif' THIS WILL CRASH THE PROGRAM
    =Always use 'else if'  */

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d", &num);

    if (num == 1)
    {

        printf(" The number is 1\n");
    }
    else if (num == 2)
    {

        printf(" The number is 2\n");
    }
    else if (num == 3)
    {

        printf(" The number is 3\n");
    }
    else
    {
        printf("It's not 1,2 or 3\n");
    }
    return 0;

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
}