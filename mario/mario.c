#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    do  // Do while loop to continue requesting a height that falls withing the parameters
    {
        height = get_int("Height between 0 & 23: ");
    }
    while (height < 0 || height > 23);

    for (int level = 0; level < height; level++)  // iterates thought the the number of rows in the height
    {
        for (int spaces = 0; spaces < height - level - 1; spaces++) // creates the number of spaces needed to justify the bricks
        {
            printf(" ");
        }

        for (int hash = 0; hash < level + 2; hash++)  //creates the number of bricks.
        {
            printf("#");
        }
        printf("\n");  // creates the line break
    }
}