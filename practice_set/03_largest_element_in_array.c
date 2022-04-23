// Q3. Create a program to print the largest number of array...

#include <stdio.h>

int largest(int *ar, int num){
    int maxx =0;

    for(int i=0; i<num; i++){
        printf("Enter the value of arr[%d]\n",i);
        scanf("%d",&ar[i]);
    }

    for(int i=0; i<num; i++){
        if(ar[i]>maxx){
            maxx = ar[i];
        }
    }
        ar[0] = 999;
    return maxx;
}

int main(){
    int n;
    printf("Enter the amount of number you want to enter\n");
    scanf("%d",&n);
    int arr[n];
    int max;
    max = largest(arr,n);

    printf("\n%d is the largest element\n",max);

    printf("\n\nThe value of ar[0] is %d\n",arr[0]);
    return 0;
}