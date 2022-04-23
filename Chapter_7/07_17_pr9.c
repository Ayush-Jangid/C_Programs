// Create a 3Dimensional array and print the address of its elements in increasing order...
#include <stdio.h>

int main(){
    
  int arr[4][3][2];

  for(int a = 0; a<4; a++){
  
  for(int b = 0; b<3; b++){
  
  for(int c = 0; c<2; c++){

        printf("The address of arr[%d][%d][%d] is %u\n",a,b,c, &arr[a][b][c]);
  }
  }
  }


    return 0;
}