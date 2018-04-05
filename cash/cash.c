#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;

    do  // checks to make sure the change given is greater then 0
    {
        change = get_float("Change due:");
    }
    while (change < 0);

    int changeint = round(change * 100);  // change to integer and round

    while (changeint >= 25)  //logic to check how many coins it will take
    {
        changeint -= 25;
        coins++;
    }
    while (changeint >= 10)
    {
        changeint -= 10;
        coins++;
    }
    while (changeint >= 5)
    {
        changeint -= 5;
        coins++;

    }
    while (changeint >= 1)
    {
        changeint -= 1;
        coins++;
    }

    printf("%i\n", coins);


}
