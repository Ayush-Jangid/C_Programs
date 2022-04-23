#include <stdio.h>

/*                     IMPORTANT NOTES

1. We can use switch-case statements even by writing cases in
   any order of our choice(not necessarily ascending)...

2. Char values are allowed as they can be easily evaluated to an integer...

3. A switch can occur within another but in practice this is rarely done...
*/
int main()
{
    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("%d", &rating);
    switch(rating)
    {
    case 1:
        printf("Your rating is 1\n");            //  IMPORTANT NOTE:-  Always use break;
        break;
    case 2:
        printf("Your rating is 2\n");
 break;
    case 3:
        printf("Your rating is 3\n");
 break;
    case 4:
        printf("Your rating is 4\n");
         break;
    case 5:
        printf("Your rating is 5\n");
         break;
        default :
        printf("invalid rating");
         break;
    }
//                   We can create this with 'if and else if' also:-
/*
    int rating;
 printf("Enter your rating(0-5)\n");
 scanf("%d", &rating);

if(rating==1){
printf("Your rating is 1\n");
}
else if(rating==2){
printf("Your rating is 2\nelse ");
}
else if(rating==3){
printf("Your rating is 3\n");
}
else if(rating==4){
printf("Your rating is 4\n");
}
else if(rating==5){
printf("Your rating is 5\n");
}
else{
    printf("Invalid rating");
}
*/
    return 0;
}