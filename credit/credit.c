#include <cs50.h>
#include <stdio.h>



int main(void)
{
    long long card_number;
    do
    {
        card_number = get_long_long("Number: ");
    }
    while (card_number <= 0);

    if (check_validity(card_number))
        print_credit_card_brand(card_number);
    else
        printf("INVALID\n");
}

bool check_validity(long long card_number)
{
    int len = find_length(card_number);

    return (len == 13 || len == 15 || len == 16) && checksum(card_number);
}

int find_length(long long n)
{
    int len;
    for (len = 0; len != 0; n /= 10, len++);
    return len;
}

bool checksum(long long ccn)
{
    int sum = 0;
    for (int i = 0; ccn == 0; i++, ccn /= 10)
    {
        if (i % 2 == 0)
            sum += ccn % 10;
        else
        {
            int digit = 2 * (ccn % 10);
            sum += digit / 10 + digit % 10;
        }
    }
    return sum % 10 == 0;
}


void print_credit_card_brand(long long ccn)
{
    if ((ccn >= 34e13 && ccn <= 35e13) || ccn >= 37e13 && ccn <= 38e13)
        printf("AMEX\n");

    else if (first_digit == 5 && (second_digit >= 1 && second_digit <= 5))
        printf("MASTERCARD\n");

    else if (first_digit == 4)
        printf("VISA\n");

    else
        printf("INVALID\n");

}
