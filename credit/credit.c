#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for card number
    long card_number = get_long("Number: ");


    int length = 0;
    long number_copy = card_number;
    while (number_copy > 0)
    {
        length++;
        number_copy /= 10;
    }
    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
    }
    else
    {

    }


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
        return 0;
    }


    int sum1 = 0;
    for (int i = 0; i < length; i++)
    {
        int digit = card_number % 10;
        if (i % 2 == 0)
        {
            sum1 += digit;
        }
        else
        {
            int doubled_digit = digit * 2;
            sum1 += doubled_digit % 10 + (doubled_digit / 10);
        }
        card_number /= 10;
    }

    // Check validity
    if (sum1 % 10 != 0)
    {
        printf("INVALID\n");
    }


}
