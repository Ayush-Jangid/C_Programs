#include <stdio.h>

int main(){

int rating;

printf("Enter Your Rating: \n");
scanf("%d", &rating);

switch(rating){

    case 1: 
    printf("Rating:- 1\n\n");
    break;

    case 2:
    printf("Rating:- 2\n\n");
    break;

    case 3:
    printf("\nRating:- 3\n\n");
    break;

    default:
    printf("\n\nEnter a invalid rating...\n\n");
}


return 0;
}