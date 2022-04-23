// Create a string using " " and print its content using a loop...

//                                BY USING WHILE LOOP
#include <stdio.h>

int main(){
    char stg[] = "PRINTED";
    char *pointer = stg;

    while (*pointer!='\0'){
        printf("%c", *pointer);
        pointer++;
    }
    return 0;
}
//                                 BY USING FOR LOOP 
// #include <stdio.h>

// int main(){
//     char stg[] = "PRINTED"; // {"PRINTED"}; We can print it also like this...


// printf("\n");
//     for(int i = 0; i<7; i++){
//         printf("%c",stg[i]);
//     }

//     return 0;
// }