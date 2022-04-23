#include <stdio.h>
//Q.6 Write a recursive function to calculate the sum of first n natural numbers...
// First n natural numbers sum = first(n-1)+n...


int sum(int n);
int main(){
    int number;
    printf("Enter the number \n");
    scanf("%d",&number);

    printf("The sum of first %d natural numbers is %d \n", number , sum(number));




    return 0;
}
int sum(int n){
if (n==1){
    return 1;

}
else{
    return n + sum(n-1);
}

}