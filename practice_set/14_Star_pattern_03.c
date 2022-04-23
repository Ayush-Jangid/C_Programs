// Q13. Create a program to print pattern of given character... Example:-  *****
//                                                                          ****
//                                                                           ***
//                                                                            **
//                                                                             *

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    char p[15];
    printf("\nEnter the character you want to print\n");
    scanf("%s",p);
    
    for(int i=0;i<n;i++){

        for(int k=0;k<i;k++){  //(int k=0; 0<0; k++)
            printf(" ");
        }

        for(int j=n;j>i;j--){  //(int j=5; 5>0; j--)
    printf("%s",p);
        }

        printf("\n");
    }
    return 0;
}