// Repeat problem 7 a custom input given by user...
#include <stdio.h>

void print(int table[], int num){

for(int i=0; i<10; i++){
    table[i]= num*(i+1);
}
for(int i=0; i<10; i++){
    printf("%d X %d is = %d\n",num,i+1,table[i]);
}
}

int main(){
    int mtable[3][10];
int n;

printf("Enter the number: ");
scanf("%d",&n);
printf("\n");

print(mtable[0],n);

    return 0;
}