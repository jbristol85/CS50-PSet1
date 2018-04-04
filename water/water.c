#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n;

    do
    {
        n = get_int("Minutes: ");

    }
   while(n < 0);

     printf("Bottles: %i\n", n * 12);

}