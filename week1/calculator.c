#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long dollars = 1;

    while(true)
    {
        char c = get_char("here's $%li . double it and give to next person? ", dollars);

        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
}

