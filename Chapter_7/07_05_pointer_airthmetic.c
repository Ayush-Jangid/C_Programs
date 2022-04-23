#include <stdio.h>
// The size of integer is 4bytes(Its may different in differnt compters)...
// And size of float is 4bytes...
// As well as the size of char is 1byte...
int main(){
// int i;
// int * pointer =&i;


// printf("The address of i is %u\n", pointer);

// pointer++;  // It will increase the adress of i by 4byte...
// pointer++;  // It will increase the adress of i again by 4 byte... 
// pointer=pointer+2; //It will increase the adress of i by 2*4 = 8bytes...
// printf("The address of i is %u\n", pointer);

//                          IN CHAR CASE:-
// char i;

// char * pointer =&i; // The size of char is 1 byte...


// printf("The address of i is %u\n", pointer);

//  pointer++;  // It will increase the adress of i by 1byte...
// pointer++;  // It will increase the adress of i again by 1 byte... 
// pointer=pointer+2; //It will increase the adress of i by 2*1 = 8bytes...
// printf("The address of i is %u\n", pointer);

//                      FLOAT EXAMPLE:-
// The size of float is 4 bytes...
float i =9.8;
float *pointer = &i;

printf("The address of i is %u\n",pointer);
pointer++;
printf("The address of i is %u\n",pointer);

return 0;
}