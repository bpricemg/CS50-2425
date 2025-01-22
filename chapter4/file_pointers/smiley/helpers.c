#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // For each row in the height
    for (int i = 0; i < height; i++)
    {
        // For each column in the width
        for (int j = 0; j < width; j++)
        {
            // Change all black pixels to bright yellow
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00)
            {
                image[i][j].rgbtRed = 0xff;
                image[i][j].rgbtGreen = 0xff;
            }

            // Change all white pixels to teal
            if (image[i][j].rgbtRed == 0xff && image[i][j].rgbtGreen == 0xff && image[i][j].rgbtBlue == 0xff)
            {
                image[i][j].rgbtRed = 0x4b;
                image[i][j].rgbtGreen = 0xc8;
                image[i][j].rgbtBlue = 0xaf;
            }
        }
    }
}
