#include <cs50.h>
#include <stdio.h>

bool check_sum(long long card_number, int length);
void check_type(long long card_number, int length);

int main(void)
{
    long long card_number;
    do
    {
        card_number = get_long_long("Number: ");
    }
    while (card_number <= 0);

    int length = 0;
    long long number_copy = card_number;
    while (number_copy > 0)
    {
        length++;
        number_copy /= 10;
    }

    if ((length != 13 && length != 15 && length != 16) || check_sum(card_number, length) == false)
    {
        printf("INVALID\n");
    }
    else
    {
        check_type(card_number, length);
    }
}

bool check_sum(long long card_number, int length)
{
    int sum = 0;
    int count = 0;

    while (card_number > 0)
    {
        int digit = card_number % 10;
        card_number /= 10;

        if (count % 2 == 1)
        {
            digit *= 2;
            digit = digit / 10 + digit % 10;
        }

        sum += digit;
        count++;
    }

    return sum % 10 != 0;
}


void check_type(long long card_number, int length)
{
    int first_digit = card_number / (10 * (length - 1));
    int second_digit = card_number % (10 * (length - 1)) / (10 * (length - 2));

    if (first_digit == 3 && (second_digit == 4 || second_digit == 7))
    {
        printf("AMEX\n");
    }
    else if (first_digit == 5 && (second_digit >= 1 && second_digit <= 5))
    {
        printf("MASTERCARD\n");
    }
    else if (first_digit == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
