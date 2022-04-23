// Write a program to create an array of 10 integers and store multiplication table of 5 in it...
// #include <stdio.h>

// int main(){
//          int five[10];
//          int *pointer=  five;

         

//          for(int i=1;i<11;i++){
                  
//                 *pointer = i*5;
//                  pointer++;
//          }
//          for(int i=1;i<11;i++){
//              printf("5 X %d is %d\n",i,*five); 
//             *five = *(five+i);
//          }
//     return 0;
// }

//                                         OR
//                             WE CAN DO THAT LIKE THIS ALSO:-

#include <stdio.h>

int main(){
    int five[10];

    for(int i = 0;i<10; i++){

        five[i] = 5*(i+1);
    }
    for(int i = 0;i<10; i++){

            printf("5 X %d is %d\n",i+1,five[i]);
    }
    return 0;
}