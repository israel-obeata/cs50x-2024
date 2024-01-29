#include <cs50.h>
#include <stdio.h>

bool sum0(card_number, length);
void check_start(card_number, length);

int main(void)
{
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
        bool is_sum_0 = sum0(card_number, length);

        if (is_sum_0 == false)
        {
            printf("INVALID\n");
        }
        else
        {
            check_start(card_number, length);
        }
    }







}


bool sum0(card_number, length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        int digit = card_number % 10;
        if (i % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            int doubled_digit = digit * 2;
            sum1 += doubled_digit;
        }
        card_number /= 10;
    }

    // Check validity
    return sum % 10 != 0;
}


void check_type(card_number, length)
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
        return 0;
    }

}
