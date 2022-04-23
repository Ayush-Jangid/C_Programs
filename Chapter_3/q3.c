#include <stdio.h>
//                ASCII VALUES
int main(){
    // 97-122 = a-z
char ch;

printf("Enter the character \n");
scanf("%c", &ch);

if(ch<=122 && ch>=97){
printf("It is lowercase");
}

else{
printf("It is not a lowercase");

}



    return 0;
}