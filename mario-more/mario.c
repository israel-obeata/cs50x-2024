#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 0 && n < 9);


    for(int i, i < n, i--)
    {
        printf(" " * (n - 1) + "#" + "  " + "\n");
        n --;
    }
}


