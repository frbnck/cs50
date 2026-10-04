#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("what's the height? ");
    }
    while (height <= 0);

    for (int i = 0; i < height; i++)
    {
        int blanks = height - i - 1;
        int blocks = i + 1;

        for (int j = 0; j < blanks; j++)
        {
            printf(" ");
        }
        for (int h = 0; h < blocks; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
