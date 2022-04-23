// Q17. Create a program to print box pattern... Example:- 
//                                                         *****
//                                                         *   *
//                                                         *   *
//                                                         *   *
//                                                         *****

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    printf("\n");
    for(int i=0;i<n;i++){ // i=0; i<5; i++

           if(i==0 || i== n-1){ // i=0 i=4
               for(int c=n;c>0;c--){ // int c =5; 5>0
                   printf("*");
               }
           }


            else{
           printf("*");
        for(int j=2;j<n;j++){ // j=2; 2<5; j++
            printf(" ");}

            printf("*"); }

            printf("\n");
    }
        printf("\n");


    return 0;
}