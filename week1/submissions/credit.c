#include <cs50.h>
#include <stdio.h>

bool luhn_algorithm(long number);
int digit_counter(long counter);

int main(void)
{
    long card_number = get_long("What's the credit card number? ");

    // lunh's algorithm
    bool is_valid = luhn_algorithm(card_number);

    // counts the digits of the card number
    int digits = digit_counter(card_number);

    // finds the first two numbers
    long first_two = card_number;
    while (first_two >= 100)
    {
        first_two /= 10;
    }

    // finds the first number
    long first_one = first_two / 10;

    // checks validity and credit card company
    if (!is_valid)
    {
        printf("INVALID\n");
    }
    else if ((digits == 13 || digits == 16) && first_one == 4)
    {
        printf("VISA\n");
    }
    else if (digits == 15 && (first_two == 34 || first_two == 37))
    {
        printf("AMEX\n");
    }
    else if (digits == 16 && (first_two == 51 || first_two == 52 || first_two == 53 ||
                              first_two == 54 || first_two == 55))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

bool luhn_algorithm(long number)
{
    // lunh's algorithm
    int current_digit = 1, sum = 0;

    do
    {
        if (current_digit % 2 == 1)
        {
            sum += number % 10;
        }
        else
        {
            int double_number = (number % 10) * 2;
            if (double_number > 9)
            {
                double_number -= 9;
            }
            sum += double_number;
        }

        number /= 10;
        current_digit++;
    }
    while (number >= 1);

    bool is_valid = ((sum % 10) == 0);

    return is_valid;
}

int digit_counter(long counter)
{
    // counts the digits of the number
    int digits = 0;

    while (counter >= 1)
    {
        counter /= 10;
        digits++;
    }
    return digits;
}
