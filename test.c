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
    string *p = &n;
    printf("%s\n", p)

    char *s = "Hi!";
    printf("%s\n", s);
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
