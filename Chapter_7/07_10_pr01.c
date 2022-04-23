// Q1. Create an array of 10 numbers.Verify using pointer arithmetic that (ptr+2) points to the third element
//     where ptr is a pointer pointing to the first element of the array...
#include <stdio.h>

int main(){
//           int arr[10] = {2,3,4,5,6,7,8,9,11,12};
//           int *ptr = &arr[0];
//           printf("The Value of first element is %d\n", *ptr);
//           printf("The address of first element is %u\n",ptr);
          
//           ptr= ptr+2;

//               printf("The Value of third element is %d\n", *ptr);
//           printf("The address of third element is %u\n",ptr);

      //    Verified...
      
      //                            OR WE CAN ALSO SOLVE THIS LIKE THAT

      int arr[10] = {2,3,4,5,6,7,8,9,11,12};
          int *ptr = &arr[0]; // NOW PTR = FIRST ELEMENT...
          ptr = ptr + 2;

          if(ptr==&arr[2]){
                  printf("Ptr pointing the third element, Hence Verified...\n");
          }

          else{
              printf("Ptr is not pointing the third element...\n");
          }
    return 0;
}