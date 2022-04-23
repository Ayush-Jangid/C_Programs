#include <stdio.h>

/*Priority  Operators
1st        *, / and % Operators of higher priority are evaluated first in the absence of PARENTHESIS(Bracets etc)...
2nd        + and -      
3rd         =
*/
int main()
{
    int x = 2;
    int y = 3;

    printf("The value of 3*x - 8*y is %d \n", 3 * x - 8 * y);
    printf("The value of 8*y / 3*x is %d \n", 8 * y / 3 * x);
    // 8*y / 3*x = 24/6 will give wrong answer
    // 24/3*2
    // 8*2
    // 16            (BODMASS not applied, Calculations goes left to right)  IMPORTANT


    /*Operator Associativity = When operators of equal priority are present in an expression,
    the tie is taken care of by associativity. 

                      x*y / z = (x*y) / z          
                      x / y*z = (x/y) * z      */


/*Control Instructions
Determine the flow of control in a program four types of control instructions in C are:

1  Sequence Control Instuctions 
2  Decision Control Instuctions              (Not in this chapter)
3  Loop Control Instuctions
4  Case Control Instuctions
    return 0;*/
}