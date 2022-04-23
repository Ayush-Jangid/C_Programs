#include <stdio.h>
// i++; or ++i;   i is increased by 1...
// i--; or --i;   i is decreased by 1...

// IMPORTANT:-  += is compound assignment operator 
//              just like -= , *= , /= 
int main()
{
int i= 5;
printf("The value of i++ is %d\n", i++);
// i++; or i--;  first print then increment...
// ++i; or --i;  first increment then print...
printf("The value of i is %d\n",i);

i+= 10; //  Increments i by 10...   OR  i + 10
printf("The value of i is %d\n", i);         

return 0;
}



