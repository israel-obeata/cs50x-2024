#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for card number
    long card_number = get_long("Number: ");

    // Check card length
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

    // Check card type
    //int first_digit = card_number / (long long)pow(10, length - 1);
    //int second_digit = card_number / (long long)pow(10, length - 2) % 10;

    string str_number = (string) card_number;

    int first_digit = str_number[0];
    int second_digit = str_number[1];

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

    // Apply Luhn's algorithm
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
