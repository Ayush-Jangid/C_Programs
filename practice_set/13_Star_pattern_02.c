// Q12. Create a program to print pattern in descending order... Example:-    *
//                                                                           **
//                                                                          ***
//                                                                         ****
#include <stdio.h> 

int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    char p[15];
    printf("\nEnter the character you want to print\n");
    scanf("%s",p);

    for(int i=0;i<n;i++){ // (int  i=0; i<4 ; i++)

    for(int j=n;j>i+1;j--){ // (int j=5; 5>1; j-- )
       printf(" ");
    }
    for(int k=0;k<i+1;k++){ // (int k=0; k<1; k++)
            printf("%s",p);
    }
    printf("\n");
    }

    return 0;
}