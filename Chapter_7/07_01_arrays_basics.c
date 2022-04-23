#include <stdio.h>
// arrays is a collection of similar elements...

int main(){

    //This is long method to do this...
// int rollno1,rollno2,rollno3,rollno4,rollno5;
//       rollno1 =  23;
//       rollno2 =  34;
//       rollno3 =  45;
//       rollno4 =  56;
//       rollno5 =  67;
    int m;
int Rollno[5]; // We can aslo use this int Rollno[] = {23,34,45,56,6};

Rollno[0] = 23;      // Arrays index starts with 0...
Rollno[1] = 34;
Rollno[2] = 45;
Rollno[3] = 56;
Rollno[4] = 6;

printf("Enter Your Rollno:\n");
scanf("%d",&m);Rollno[5]= m;   

if (m<0 || m>4){
    
    printf("Invalid Rollno\n");
   
}

else{
printf("Marks of Rollno%d is = %d\n", m,Rollno[m]);
}

    return 0;
}