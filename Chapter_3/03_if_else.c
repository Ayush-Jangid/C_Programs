#include <stdio.h>

/* IMPORTANT
   == means equal to 
   >= means greater than or equal to
   > means greater than
   < means smaller than
   <= means smaller than or equal to 
   != means not equal to
*/
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    //if(age!=17)   != means Not equal to
    
      if (age > 17 )   
    {
        printf("You can drive\n");
    }

    else
    {
        printf("You cannot drive\n");
    }
   // if (age=50)  Wrong
    if (age == 50)
    {
        printf("HALF CENTURY\n");
    }

    return 0;
}