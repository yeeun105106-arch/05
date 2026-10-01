#include <stdio.h>

int main(void)
{
    int answer = 59;
    int input;
    int trial = 0;

    do
    {
        /* code */
        printf("Guess a number: ");
        scanf("%i", &input);

        if (answer < input)
            printf("high!\n");
        else if (answer > input)
            printf("low!\n");

        trial++;
    } while (answer != input);

    printf("Congraturation! trial:%i\n", trial);


    return 0;
}