#include <stdio.h>

// The syntax of for loop like this:-
//                                    for(intialize; test; increment or decrement){ }
//  For example                       for(int i = 0; i<10;  a++){  }
int main(){


    for(int i = 0; i<10; i++)     // Dont use semicolon after increment like i++;
                                  // Use i++ only
           
    {
        printf("The value of i is %d\n", i + 1);
     }
    return 0;
}