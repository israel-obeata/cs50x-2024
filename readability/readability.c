#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt the user for some text
    string s = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters, words, sentences;
    letters = words = sentences = 0;

    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (isalpha(s[i]))
        {
            letters++;
        }
        if (s[i])
    }
}
