#include <stdio.h>
   void count(int arr[]){
             int i,c1=0,c2=0,c3=0;
             for(i=0;i<10;i++){
                 if(arr[i]>0){
                     c1++;
                 }
                 else if (arr[i]<0)
                          c2++;
                  else c3++;
             }
             printf("positve = %d \n negative = %d \n zero = %d\n",c1,c2,c3);
   }


int main(){
 int a[10];
 int i;

 printf("Enter 10 numbers\n");
 for(i=0;i<10;i++){
     scanf("%d",&a[i]);
 }

 count(a);
    return 0;
}