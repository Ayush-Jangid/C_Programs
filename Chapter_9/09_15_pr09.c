//Q9. Write a structure capable of storing date. Write a function  to compare those  dates...

#include <stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
} date;

void display (date d){
    printf("Date is:- %d/%d/%d \n",d.day,d.month,d.year);
};

int datecmp (date d1,date d2){

// YEAR...
if(d1.year<d2.year){
    return 1;
};
if(d1.year>d2.year){
    return -1;
};
// MONTHS...
if(d1.month<d2.month){
    return 1;
};
if(d1.month>d2.month){
    return -1;
};
// DAY...
if(d1.day<d2.day){
    return 1;
};
if(d1.day>d2.day){
    return -1;
    };
    return 0;
};  


int main(){
    
date d1 = {15,7,2008};
date d2 = {15,8,2008};
display(d1);
display(d2);

int a = datecmp(d1,d2);

if(a<0){
    printf("\nDate1 is greater than Date2\n\n");
}
else if(a>0){
    printf("\nDate2 is greater than Date1\n\n");
}
else{
    printf("\nBoth Dates are equal\n\n");
};

    return 0;
}