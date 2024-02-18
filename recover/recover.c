#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint_8 BYTE;

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
    BYTE buffer[512];

    // Track number of imagesgenerated
    int count_image = 0;

    // File pointer for recovered images
    FILE *output_file = NULL;

    // char filename[8]
    char *filename = malloc(8 * sizeof(char));

    // Read the blocks of 512 bytes


    // While there's still data left to read from the memory card
    while (fread(buffer, sizeof(BYTE), 512, card) == 512)
    {
        // Check if bytes indicate start of JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {

        }
        // Create JPEGs from the data

    }
}
