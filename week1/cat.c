#include <cs50.h>
#include <stdio.h>

int get_n(void);
void meow(int times);

int main(void)
{
    // get a number from user
    int n = get_n();

    // meow some number of times
    meow(n);
}

int get_n(void)
{
    int n;

    // get a number from user
    do
    {
        n = get_int("what's n? ");
    }
    while (n < 0);

    return n;
}

void meow(int times)
{
    // meow some number of times
    for (int i = 0; i < times; i++)
    {
        printf("meow\n");
    }
}
