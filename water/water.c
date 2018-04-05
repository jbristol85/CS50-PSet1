#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n;

    do  // creates a loop that will ask for an input that is greater then 0
    {
        n = get_int("Minutes: ");

    }
    while (n < 0);

    printf("Bottles: %i\n", n * 12);  // returns the quantity of bottles

}