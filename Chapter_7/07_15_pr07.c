// Q7. Create an array of size 3*10. Containing multipication tables of the number 2,7 and 9 respectively...
#include <stdio.h>

void print(int table[],int number){

    for(int i=0;i<10;i++){
         table[i] = number*(i+1);     
    }
        for(int i=0;i<10;i++){
            printf("%d X %d is %d\n", number,i+1,table[i]);
        }
printf("\n");
}


int main(){
    int mtable [3][10];

print(mtable[0], 2);
print(mtable[1], 7);
print(mtable[2], 9);

printf("\n");
for(int i = 0;i<3;i++){
    for(int j = 0;j<10;j++){
      printf("The value of mtable[%d][%d] is %d\n",i,j , mtable[i][j]);
}
}

printf("\n");
printf("The value is %d\n", mtable[1][3]);


    return 0;
}