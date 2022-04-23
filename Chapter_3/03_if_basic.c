//C program to check whether a number is even or odd
#include <stdio.h>
 /* IMPORTANT
   == means equal to 
   >= means greater than or equal to
   > means greater than
   < means smaller than
   <= means smaller than or equal to 
   != means not equal to
*/

int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

if(a%2==0){
printf("%d is even\n" , a);
}

    else{

printf("%d is odd\n" , a);
    }
    return 0;
}