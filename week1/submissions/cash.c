#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change, counter, coins = 0;

    do
    {
        change = get_int("How much change? ");
    }
    while (change < 0);

    printf("Change owed: %d\n", change);

    // how many quarters
    counter = change / 25;
    change -= counter * 25;
    coins = counter;

    // how many dimes
    counter = change / 10;
    change -= counter * 10;
    coins += counter;

    // how many nickels
    counter = change / 5;
    change -= counter * 5;
    coins += counter;

    // how many pennies
    counter = change / 1;
    change -= counter * 1;
    coins += counter;

    printf("%d\n", coins);
}
