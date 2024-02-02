#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string str = get_string("please input: ");
    printf("%c,%c,%c,%c|\n", str[0], str[1], str[2], str[3]);
    printf("%i,%i,%i,%i|\n", str[0], str[1], str[2], str[3]);
}
