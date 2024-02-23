// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Declare variables
unsigned int hash_value;
unsigned int word_count;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    // Hash the word to obtain the hash value
    hash_value = hash(word);

    // Point cursor to the first node
    node *cursor = table[hash_value];

    // Go through linked list
    while (cursor != NULL)
    {
        if (strcasecmp(word, cursor->word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    // return toupper(word[0]) - 'A';
    unsigned int total = 0;
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        total += tolower(word[i]);
    }
    return total % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open the dictionary file
    FILE *source = fopen(dictionary, "r");
    if (source == NULL)
    {
        printf("Unable open to %s\n", dictionary);
        return false;
    }

    // Read each word in the file

    // Declare an array for hash
    char word[LENGTH + 1];

    // Scan dictionary for strings up until EOF
    while (fscanf(source, "%s", word) != EOF)
    {
        // Allocate memory for new node
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            printf("Memory Error!\n");
            return false;
        }
        // Copy word into node
        strcpy(n->word, word);

        // Calculates index of word for insertion into hashtable
        hash_value = hash(n->word);
        // Add each word to the hash table
        n->next = table[hash_value];
        table[hash_value] = n;
        word_count++;
    }



    // Close the dictionary file
    fclose(source);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    if (word_count > 0)
    {
        return word_count;
    }
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    // Iterate through buckets
    for (int i = 0; i < N; i++)
    {
        // Set cursor to the start of the linked list
        node *cursor = table[i];

        // If cursor is not NULL
        if (cursor != NULL)
        {
            // Create temp
            node *temp = cursor;
            cursor = cursor->next;
            free(temp);
        }
    }
    return true;
}
