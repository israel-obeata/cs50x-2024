#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for credit card number
    long long card_number;
    do
    {
        card_number = get_long("Number: ");
    }
    while (card_number <= 0);

    // Calculate checksum using Luhn's Algorithm
    int sum = 0;
    int count = 0;

    while (card_number > 0)
    {
        int digit = card_number % 10;
        card_number /= 10;

        if (count % 2 == 1)
        {
            digit *= 2;
            digit = digit / 10 + digit % 10; // Add digits of products
        }

        sum += digit;
        count++;
    }

    // Check the card's validity and card type
    if (sum % 10 == 0)
    {
        // Determine card type
        if (count == 15 && (card_number == 34 || card_number == 37))
        {
            printf("AMEX\n");
        }
        else if (count == 16 && (card_number >= 51 && card_number <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((count == 13 || count == 16) && (card_number / 1000000000000 == 4 || card_number / 1000000000000000 == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    
}
