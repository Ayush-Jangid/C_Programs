#include <stdio.h>
// Function is used to divide program in parts...

void display();  // Function prototype...

int main(){
    printf("Initializing display function \n");
    display(); //     Function call...
    printf("Display function finished its work \n");
    return 0;
}

void display(){               //      Function defination...
    printf("This is display\n");
}
/*
                        IMPORTANT POINTS

1. Execution of a C program starts from main()...

2. A Cprogram can have more than one functions...

3. Every functions gets called directly or indirectly from main...

4. There are two types of function in C program:-
1. Library Function :- Commonly required functions grouped together in a library file on disk...
 for example:- printf();

2. User Defined Function:- These are the functions declared and defined by users...
*/

                      // int sum( int a, int b)
// Those function which accept value called  Parameter:- a and b are parameter
// Those function which give value called return value:- int return value  

/*
                      DECLARATION, DEFINATION AND CALL
1. A function is declared to tell a computer about its existence...
2. A function is defined to get some task done...     
3. A function is called in order to be used...                 
*/