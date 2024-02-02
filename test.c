#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string str = get_string("my: ");
    printf("%c,%c,%c,%c|\n", str[0], str[1], str[2], str[3]);
    printf("%i,%i,%i,%i|\n", str[0], str[1], str[2], str[3]);
}
