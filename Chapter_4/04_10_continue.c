#include <stdio.h>
/* 
                                      NOTES:-
1. Sometimes the name of the variable might not indicate the behaviour of the program...
 OR examiner give weird variables names to confuse for example:-  int don't print this = 1;

2. break; statement completely exits the loop.

3. continue; statement skips the particular part of the loop...
*/
int main(){
    int skip = 5;
    int i = 0;

    while (i<10){
        i++;
        if(i!= skip){      //   != means not equal to...
            continue;     //  continue; skip the commands given under continue;
        }                //   if the condition given in if command meet...s
        else{
            printf("%d\n",i);
        }
    }
    return 0;
}