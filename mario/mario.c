#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while(height < 0 && height > 23);

    for (int level = 0; level < height; level++ )
    {
        for(int spaces = 0; spaces < height-level-1; spaces++)
        {
            printf(" ");
        }

        for(int hash = 0; hash < level + 2; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}