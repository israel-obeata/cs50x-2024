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
    int *p = &n; // *p: Go inside the address.    &n: The address where the value of the variable n is stored.
    printf("%p\n", &n);
    printf("%p\n", p);

    printf("%i\n", *p); // *p: Go inside the address.

    
    string s1 = "Hi!"; // s is the address of the first char in the string.
    printf("%s\n", s1);

    char *s2 = "Hi!"; // string = char *
    printf("%s\n", s2);

    char *s3 = "Hi!";
    printf("%c\n", *s3);

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
