#include <stdio.h>

int main(){
int a;
    scanf("%d",&a);

   // a = 11;   
   // while(a>10) These two lines will lead to  an infinite loop...

    while(a<=20){    //if condition is true it starts executing the program...
                    //if not then nothing will happen...
printf("%d\n", a);
a++;       //  a++; is used to print next value like 1,2,3,4 When it's not applied
           //  The same number print again and again

        //    The block keep executing as long as the 
        //    condition is true
    }

    return 0;
}
 