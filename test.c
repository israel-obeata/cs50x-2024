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
    int *p = &n;
    printf("%p\n", &n);
    printf("%p\n", p);
    printf("%i\n", *p);

    string s1 = "Hi!";
    printf("%s\n", s1);

    char *s2 = "Hi!";
    printf("%s\n", s2);

    string s3 = &"Hi!";
    printf("%s\n", s3);
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
