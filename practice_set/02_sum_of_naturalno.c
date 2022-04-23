// Q2. Print the sum of first n natural numbers...

#include <stdio.h>

int main(){
    int n;
    int result;
    printf("Enter the natural number:\n");
    scanf("%d",&n);

    // for(int i = 0; i<n ; i++){
    //     result+=i+1; // result = result + i;
    // }
    // result = result + i;
// ...WHEN YOU ENTER 5 LOOPS RUNS LIKE THIS...
    // result = 0 + 0+1; // FIRST TIME...
    // result = 1 + 1+1; // SECOND TIME...
    // result = 3 + 2+1; // THIRD TIME...
    // result = 6 + 3+1; // FOURTH TIME...
    // result = 10 + 4+1; // FIFTH TIME...


// RUNS IN CONSTANT TIME...
 result = (n*n + n)/2;

    printf("The sum of %d natural numbers is %d\n",n,result );
    return 0;
}