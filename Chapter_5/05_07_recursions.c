#include <stdio.h>
// factorail(n) = factorial(n-1)*n

// self calling function is called recursion...
int factorial(int x);

int main(){
 int a;
 printf("Enter the number \n");
 scanf("%d",&a);
 
printf("The value of factorial %d is %d\n",a, factorial(a));

    return 0;
}



int factorial(int x){
    printf("Calling factorial(%d)\n",x);
if(x==1||x==0){
    return 1;
}
    else{

     return x * factorial (x-1);
    }
}
/*
                                    IMPORTANT NOTES...
1. Recursion is sometimes the most direct way to code an algorithm.

2. The condition which doesn't call the function any further in a recursive function...
   is called as the base conditon...                                  

3. Sometimes due to a mistake made by the programmer a recursive function can keep running without
   returning resulting in a memory error...

*/