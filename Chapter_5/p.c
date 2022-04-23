#include <stdio.h>

int main(){
   int first =0, second =1, next;
   int n , i;

   printf("Enter the position \n");
   scanf("%d",&n);

   for (i=0;i<=n;i++){
      next=first+second;
 
      first=second;
      second=next;
           printf("%d\n",next);
   }
   return 0;
}