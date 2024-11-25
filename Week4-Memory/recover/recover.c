// https://cs50.harvard.edu/x/2024/psets/4/recover/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover infile\n");
        return 1;
    }

    // open input file (forensic image)
    FILE *inptr = fopen(argv[1], "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", argv[1]);
        return 2;
    }

    // set outfile pointer to NULL
    FILE *outptr = NULL;

    // create an array of 512 elements to store 512 bytes from the memory card
    BYTE buffer[512];

    // count amount of jpeg files found
    int jpeg = 0;

    // string to hold a filename
    char filename[8] = {0};

    // read memory card untill the end of file
    while (fread(buffer, sizeof(BYTE) * 512, 1, inptr) == 1)
    {
        // check if jpeg is found
        if (buffer[0] == 0xFF && buffer[1] == 0xD8 && buffer[2] == 0xFF && (buffer[3] & 0xF0) == 0xE0)
        {
            // If outptr is not NULL (a JPEG was being written), closes the previous output file.
            if (outptr != NULL)
            {
                fclose(outptr);
            }
            // Formats a new filename with a zero-padded three-digit number (e.g., 000.jpg, 001.jpg) based on the jpeg count.
            sprintf(filename, "%03d.jpg", jpeg++);

            // open a new outptr for writing a new found jpeg
            outptr = fopen(filename, "w");
        }

        // keep writing to jpeg file if new jpeg is not found
        if (outptr != NULL)
        {
            fwrite(buffer, sizeof(BYTE) * 512, 1, outptr);
        }
    }

    // close last opened outptr
    if (outptr != NULL)
    {
        fclose(outptr);
    }

    // close input file (forensic image)
    fclose(inptr);

    return 0;
}
