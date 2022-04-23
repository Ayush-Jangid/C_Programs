#include <stdio.h>

int main(){
    int i =0;

    do{
     printf("The value of i is %d\n", i); 
       if(i==12){                         
  break;}    // break; breaks the loop...
 
              i++;
               }           while (i<50);
    return 0;
}