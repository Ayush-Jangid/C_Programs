#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){

        for(int k=0;k<i;k++){  //(int k=0; 0<0; k++)
            printf(" ");
        }

        for(int j=n;j>i;j--){  //(int j=5; 5>0; j--)
            printf("%d",i);
        }

        printf("\n");
    }
    return 0;
}