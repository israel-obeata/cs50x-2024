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
        if ((i == 0 && s[i] != ' ') || (i != i - 1 && s[i] == ' ' && s[i+1] != ' '))
        {
            words++;
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            sentences++;
        }
    }
    float L = letters / (float) words * 100;
    float S = words / (float) sentences * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    printf("");
}
