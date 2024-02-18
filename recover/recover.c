#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");
    if (card == NULL)
    {
        printf("Could not open file");
        return 2;
    }

    // Create a buffer for a block of data
    uint8_t buffer[512];

    // Track number of imagesgenerated
    int count_image = 0;

    // File pointer for recovered images
    FILE *output_file = NULL;

    char *filename = 

    // While there's still data left to read from the memory card
    while (fread(buffer, 1, 512, card) == 512)
    {
        // Create JPEGs from the data

    }
}
