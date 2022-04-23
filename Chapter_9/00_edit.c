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