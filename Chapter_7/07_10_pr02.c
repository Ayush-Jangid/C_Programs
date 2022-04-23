#include <stdio.h>

int main(){
    int s[3] = {2,3,4};
    
    printf("The value of third element is %d", *(s+1));

    return 0;
}