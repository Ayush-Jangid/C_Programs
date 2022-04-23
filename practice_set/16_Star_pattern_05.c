// Q16. Create a program to print prymid pattern...

#include <stdio.h>

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of rows you want to print:\n");
    scanf("%d",&n);
    int a =0;
    char c[15];
    printf("Enter the character you want to print:\n");
    scanf("%s",c);
    printf("\n");

    for(int i=0;i<n;i++){

    for(int j=n;j>i+1;j--){
        printf(" ");
    }

    for (int k=0; k<a+1; k++) // (int k=0; 0<3; k++)
    {
        printf("%s",c);
    }
    a++;
    a++;
    

    printf("\n");
    }
    printf("\n");

    return 0;
}