//                              AGE DIFFERENCE PROGRAM
#include <stdio.h>
//                             Declaring Date Structure...

typedef struct date{
int day;
int month;
int year;
char name[15];
} date;

//                          Taking D.O.B as input from user...

int input(date *d,int *d28,int *d29,int *d30,int *d31){
printf("Enter name: %s\n",(*d).name);
scanf("%s",&(*d).name);

printf("Enter D.O.B of %s:-\n",(*d).name);

// ...Year Section...

printf("Enter year: ");
scanf("%d",&(*d).year);

// ...Month Section...

printf("Enter month(1-12): ");
scanf("%d",&(*d).month);

// ...Day Section...

// 31 Days Section...
if((*d).month == 1 || (*d).month == 3 || (*d).month == 5 || (*d).month == 7
 || (*d).month == 8 || (*d).month == 10 || (*d).month == 12){
printf("Enter Day(1-31): ");
scanf("%d",&(*d).day);

if((*d).day>31 || (*d).day<1){
        *d31 = 1;
};
}
// 30 Days Section...
else if((*d).month == 4 || (*d).month == 6 || (*d).month == 9 || (*d).month == 11){
printf("Enter Day(1-30): ");
scanf("%d",&(*d).day);

if((*d).day>30 || (*d).day<1){
        *d30 = 1;
};
}
// 29 Days Section...
else if((*d).year%4 == 0){
    printf("Enter Day(1-29): ");
scanf("%d",&(*d).day);

if((*d).day>29 || (*d).day<1){
        *d29 = 1;
};
}
// 28 Days Section...
else if ((*d).month == 2){
printf("Enter Day(1-28): ");
scanf("%d",&(*d).day);

if((*d).day>28 || (*d).day<1){
        *d28 = 1;
};
};
printf("\n");
};

//                          Declaring Agecmp function...

int agecmp(date d1,date d2,int *yd, int *md, int *dd){
           
if (d1.year<d2.year){
    *yd = d2.year-d1.year;
}
else if(d1.year>d2.year){
      *yd = d1.year-d2.year;
}
else{
    *yd = 0;
};

if (d1.month<d2.month){
    *md = d2.month-d1.month;
}
else if(d1.month>d2.month){
      *md = d1.month-d2.month;
}
else{
    *md = 0;
}

if (d1.day<d2.day){
    *dd = d2.day-d1.day;
}
else if(d1.day>d2.day){
      *dd = d1.day-d2.day;
}
else{
    *dd = 0;
};



};

//                             ................................. 

int main(){
    
date d1;
date d2;

int dd28,dd29,dd30,dd31;

input(&d1,&dd28,&dd29,&dd30,&dd31);

if(d1.month<1 || d1.month>12){
    printf("\tInvalid Date!\n\n");
    return 0;
};
if(d1.day<1){
    printf("\tInvalid Date!\n\n");
    return 0;
};
if(dd28==1||dd29==1||dd30==1||dd31==1){
   printf("\tInvalid Date!\n\n");
   return 0;
};


input(&d2,&dd28,&dd29,&dd30,&dd31);

if(d2.month<1 || d2.month>12){
    printf("\tInvalid Date!\n\n");
    return 0;
};
if(d2.day<1){
    printf("\tInvalid Date!\n\n");
    return 0;
};
if(dd28==1||dd29==1||dd30==1||dd31==1){
   printf("\tInvalid Date!\n\n");
   return 0;
};

int ydd,mdd,ddd;

agecmp(d1,d2,&ydd,&mdd,&ddd);

//                                   ...PRINT SECTION...

//                        .....when d1 is lesser than d2(d1<d2).....

// YEARS MONTH AND DAYS... (.1)
if(d1.year<d2.year && d1.month<d2.month && d1.day<d2.day){
    printf("%s is %d Years, %d months and %d days older than %s\n",d1.name,ydd,mdd,ddd,d2.name);
}
// MONTH AND DAYS... (.2)
else if(d1.year==d2.year && d1.month<d2.month && d1.day<d2.day){
    printf("%s is %d months and %d days older than %s\n",d1.name,mdd,ddd,d2.name);
}
// ONLY DAYS... (.3)
else if(d1.year==d2.year && d1.month==d2.month && d1.day<d2.day){
    printf("%s is %d days older than %s\n",d1.name,ddd,d2.name);
}
// ONLY YEARS... (.4)
else if(d1.year<d2.year && d1.month==d2.month && d1.day==d2.day){
    printf("%s is %d years older than %s\n",d1.name,ydd,d2.name);
}
// ONLY MONTHS... (.5)
else if(d1.year==d2.year && d1.month<d2.month && d1.day==d2.day){
    printf("%s is %d months older than %s\n",d1.name,mdd,d2.name);
}

// YEARS AND DAYS... (.6)
else if(d1.year<d2.year && d1.month==d2.month && d1.day<d2.day){
    printf("%s is %d years and %d days older than %s\n",d1.name,ydd,ddd,d2.name);
}
// YEARS AND MONTHS... 
else if(d1.year<d2.year && d1.month<d2.month && d1.day==d2.day){
    printf("%s is %d years and %d months older than %s\n",d1.name,ydd,mdd,d2.name);
}

//                       .....When d1 is greater than d2 (d1>d2).....

// YEARS MONTH AND DAYS... (.1)
else if(d1.year>d2.year && d1.month>d2.month && d1.day>d2.day){
    printf("%s is %d Years, %d months and %d days older than %s\n",d2.name,ydd,mdd,ddd,d1.name);
}
// MONTH AND DAYS... (.2)
else if(d1.year==d2.year && d1.month>d2.month && d1.day>d2.day){
    printf("%s is %d months and %d days older than %s\n",d2.name,mdd,ddd,d1.name);
}
// ONLY DAYS... (.3)
else if(d1.year==d2.year && d1.month==d2.month && d1.day>d2.day){
    printf("%s is %d days older than %s\n",d2.name,ddd,d1.name);
}
// ONLY YEARS... (.4)
else if(d1.year>d2.year && d1.month==d2.month && d1.day==d2.day){
    printf("%s is %d years older than %s\n",d2.name,ydd,d1.name);
}
// ONLY MONTHS... (.5)
else if(d1.year==d2.year && d1.month>d2.month && d1.day==d2.day){
    printf("%s is %d months older than %s\n",d2.name,mdd,d1.name);
}

// YEARS AND DAYS... (.6)
else if(d1.year>d2.year && d1.month==d2.month && d1.day>d2.day){
    printf("%s is %d years and %d days older than %s\n",d2.name,ydd,ddd,d1.name);
}
// YEARS AND MONTHS... 
else if(d1.year>d2.year && d1.month>d2.month && d1.day==d2.day){
    printf("%s is %d years and %d months older than %s\n",d2.name,ydd,mdd,d1.name);
}
//                                  ...MORE...
// D1 GREATER IN YEAR ONLY...
else if(d1.year>d2.year && d1.month<d2.month && d1.day<d2.day){
    printf("%s is %d years and %d months and %d days older than %s\n",d2.name,ydd,mdd,ddd,d1.name);
}
// GREATER IN DAY ONLY
else if(d1.year<d2.year && d1.month<d2.month && d1.day>d2.day){
    printf("%s is %d years and %d months and %d days older than %s\n",d1.name,ydd,mdd,ddd,d2.name);
}
// GREATER IN MONTH ONLY...
else if(d1.year<d2.year && d1.month>d2.month && d1.day<d2.day){
    printf("%s is %d years and %d months and %d days older than %s\n",d1.name,ydd,mdd,ddd,d2.name);
}
// D1 GREATER IN YEAR AND MONTHS...
else if(d1.year>d2.year && d1.month>d2.month && d1.day<d2.day){
    printf("%s is %d years and %d months and %d days older than %s\n",d2.name,ydd,mdd,ddd,d1.name);
}
// D1 GREATER IN MONTHS AND DAYS...
else if(d1.year<d2.year && d1.month>d2.month && d1.day>d2.day){
    printf("%s is %d years and %d months and %d days older than %s\n",d1.name,ydd,mdd,ddd,d2.name);
}
// GREATER IN YEARS AND DAYS ...
else if(d1.year>d2.year && d1.month<d2.month && d1.day>d2.day){
    printf("%s is %d years and %d months and %d days older than %s\n",d2.name,ydd,mdd,ddd,d1.name);
}
// EQUAL IN YEAR...
else if(d1.year==d2.year && d1.month<d2.month && d1.day>d2.day){
    printf("%s is %d month and %d days older than %s\n",d1.name,mdd,ddd,d2.name);
}
// EQUAL IN YEAR...
else if(d1.year==d2.year && d1.month>d2.month && d1.day<d2.day){
    printf("%s is %d month and %d days older than %s\n",d2.name,mdd,ddd,d1.name);
}
// EQAUL IN MONTH...
else if(d1.year>d2.year && d1.month==d2.month && d1.day<d2.day){
    printf("%s is %d years and %d days older than %s\n",d2.name,ydd,ddd,d1.name);
}
// EQAUL IN MONTH...
else if(d1.year<d2.year && d1.month<d2.month && d1.day>d2.day){
    printf("%s is %d years and %d months older than %s\n",d1.name,ydd,ddd,d2.name);
}
// EQUAL IN DAYS...
else if(d1.year<d2.year && d1.month>d2.month && d1.day==d2.day){
    printf("%s is %d years and %d months older than %s\n",d1.name,ydd,mdd,d2.name);
}
// EQUAL IN DAYS...
else if(d1.year>d2.year && d1.month<d2.month && d1.day==d2.day){
    printf("%s is %d years and %d months older than %s\n",d2.name,ydd,mdd,d1.name);
}
//                         .....When dates are same...
else{
    printf("%s and %s are of same age...\n",d1.name,d2.name);
};


    return 0;
}