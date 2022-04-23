#include <stdio.h>

int main()
{
    int i = 0;
    scanf("%d", &i);

    while (i < 20)
    {
        if(i>=10){
            printf("The value of  i is %d\n", i);
        }
i++;
    }
    return 0;
}