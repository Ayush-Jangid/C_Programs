#include <stdio.h>

int main()
{
    // int = b; b = a;  //Invalid

    // float d = (3.0 / 8 - 2);      3.0 or any number with decimal consider as double in Gcc
    // printf("value of d %f \n", d);

    // Q3. Write a program to determine whether a number is divisible by 97 or not

    // int num;
    // printf("Enter the number \n");
    // scanf("%d", &num);
    // printf("Divisiblity test returns: %d \n", num%97);

    /* Q4 Explain step by step evaluation of 3*x/y-z+k.
       Where x =2 ,  y=3 , z = 3 and k=1 */

    int x = 2, y = 3, z = 3, k = 1;
    int result = (3 * x) / y - z + k;
    // 6/3 - 3 + 1
    // 2 - 3 + 1
    // 2 - 2 = 1
    // 0

    printf("The answer is %d", result);

    return 0;
}