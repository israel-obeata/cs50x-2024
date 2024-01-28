#include <cs50.h>
#include <stdio.h>

int main(int n)
{
    int num = get_int("");

    for(int i, i < n, i--)
    {
        printf(" " * (num - 1) + "#" + "  " + " " * (num - 1)  + "\n");
        num --;
    }
}


void fun()
