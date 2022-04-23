//Q4. Write a program using a function which calculates the sum and average of two numbers.
//    Use pointers and print the values of sum and average in main()...
#include <stdio.h>
void sumavg(int a, int b, int *sum, float *avg){
         *sum = a+b;
         *avg = (float)*sum/2;
}
int main(){
    int x=5;
    int y=15;
    int summ;
    float avgg;

sumavg(x,y,&summ,&avgg);

printf("The sum of x and y is %d\n",summ);
printf("The avg of x and y is %fsumm\n",avgg);
return 0;
}