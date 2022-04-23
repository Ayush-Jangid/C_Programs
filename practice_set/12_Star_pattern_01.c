// Q12. Create a program to print pattern in ascending order... Example:- *
//                                                                        **
//                                                                        ***
#include <stdio.h>

int main(){
    int n;
    printf("Enter the value:\n");
    scanf("%d",&n);

    char p[15];
    printf("\nEnter the character you want to print\n");
    scanf("%s",p);
    printf("\n");
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i+1;j++){
             printf("%s",p);
        }
        printf("\n");
    }
    return 0;
}