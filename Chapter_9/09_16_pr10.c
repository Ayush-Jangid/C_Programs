//Q10. Write a structure capable of storing time. Write a function  to compare those  dates...

#include <stdio.h>

typedef struct time
{
    int hours;
    int minutes;
    int seconds;

}time;

void display(time t){
printf("\nTime = %d:%d:%d\n\n",t.hours,t.minutes,t.seconds);
};

int timecmp(time t1,time t2){
// YEARS...
if(t1.hours<t2.hours){
    return 1;
};
if(t1.hours>t2.hours){
    return -1;
};
// MONTHS...
if(t1.minutes<t2.minutes){
    return 1;
};
if(t1.minutes>t2.minutes){
    return -1;
};
// SECONDS...
if(t1.seconds<t2.seconds){
    return 1;
};
if(t1.seconds>t2.seconds){
    return -1;
};
return 0;
};

int main(){
    
    time t1={10,05,15};
    time t2={10,03,15};
display(t1);
display(t2);

int diff = timecmp(t1,t2);

int a = timecmp(t1,t2);

if(a<0){
    printf("t1 is greater than t2");
}
else if(a>0){
    printf("t2 is greater than t2");
}
else{
    printf("Both times are equal\n");
}
    return 0;
}