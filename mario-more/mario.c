#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int();

    while num > 0
    {
        printf(" " * (num - 1) + "#" + "  " + " " * (num - 1)  + "\n");
        num --;
    }
}
