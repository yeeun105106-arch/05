#include <stdio.h>

int main(void)
{
    int num;

    printf("Input an integer: ");
    scanf("%i", &num);

    if (num > 0)
        printf("Positive!\n");
    else if (num < 0)
        printf("Negative!\n");
    else
        printf("Zero!\n");


    return 0;
}