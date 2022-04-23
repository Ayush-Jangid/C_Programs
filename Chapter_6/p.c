#include <stdio.h>

int ten(int *a){
    int tenn;
    tenn = *a*10;
    return tenn;
}
int main(){
    int i=5;

   ten(&i);
    printf("Now the value of i %d\n", i);
    return 0;
}