#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// void draw(int n);

int main(void)
{
    // int height = get_int("Height: ");
    // draw(height);

    int n = 50;
    int *p = &n; // *p: Go inside the address.    &n: The address of the value.
    printf("%p\n", &n); //'n' is a integer, not an address, so we need add an '&' in front of 'n'.
    printf("%p\n", p); // p: address
    printf("%i\n", *p); // *p: Go inside the address, view the value.

    //
    // string s1 = "Hi!"; // s is the address of the first char in the string.
    // printf("%s\n", s1);

    // char *s2 = "Hi!"; // string = char *
    // printf("%s\n", s2);

    //
    char *s = "Hi!";
    printf("%p\n", s); //'s' is an address, so we don't need add an '&' in front of 's'.
    // *s: Go inside the address, view the value.
    printf("%c\n", *s); // *s = s[0]
    printf("%c\n", *(s + 1)); // *(s + 1) = s[1]
    printf("%c\n", *(s + 2)); // *(s + 2) = s[2]
}






















void draw(int n)
{
    if (n <= 0)
        return;

    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
