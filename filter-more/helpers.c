#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float red = image[i][j].rgbtRed;
            float green = image[i][j].rgbtGreen;
            float blue = image[i][j].rgbtBlue;

            int average = round((red + green + blue) / 3);

            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = temp;
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            int totalRed, totalGreen, totalBlue;
            totalRed = totalGreen = totalBlue = 0;
            int count = 0;

            // get neighbouring pixels
            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {
                    int targetX = i + x;
                    int targetY = j + y;

                    // check if neighbouring pixel is valid
                    if (targetX < 0 || targetX > (height - 1) || targetY < 0 || targetY > (width - 1))
                        continue;

                    // if valid, get image value
                    totalRed += image[targetX][targetY].rgbtRed;
                    totalGreen += image[targetX][targetY].rgbtGreen;
                    totalBlue += image[targetX][targetY].rgbtBlue;

                    count++;
                }

                // calculate average
                temp[i][j].rgbtRed = round(totalRed / count);
                temp[i][j].rgbtGreen = round(totalGreen / count);
                temp[i][j].rgbtBlue = round(totalBlue / count);
            }
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // create a copy of image;
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }


}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
