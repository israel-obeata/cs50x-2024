#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void draw(int n);

int main(void)
{
    // string str = get_string("my: ");
    // printf("%c,%c,%c,%c|\n", str[0], str[1], str[2], str[3]);
    // printf("%i,%i,%i,%i|\n", str[0], str[1], str[2], str[3]);

    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
        return;

    draw(n - 1);
}
