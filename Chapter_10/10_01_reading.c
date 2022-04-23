#include <stdio.h>

int main(){
    
FILE *ptr;
int n;
float n2;
int n3;
char print[15];
ptr = fopen("number.txt","r");

fscanf(ptr,"%d",&n); // fscanf stores value from file to n...
printf("The number is %d\n",n);

fscanf(ptr,"%f",&n2); // fscanf stores value from file to n2...
printf("The number is %.2f\n",n2);

fscanf(ptr,"%s",&print);
printf("%s\n",print);

fscanf(ptr,"%d",&n3); // fscanf stores value from file to n3...
printf("The number is %d\n",n3);

fclose(ptr); // This will close the file after use...  // It is very important to close the file after use...

// flose():- This will tell the compiler that we are done working with this file and the associated
//           resources could be freed...
    return 0;
}