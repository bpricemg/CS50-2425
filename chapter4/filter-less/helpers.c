#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop through each pixel in the image
        // Calculate the average pixel value
        // Set each color value to the average value

    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // For each pixel
        // Calculate each new color value using the sepia formula
        // sepiaRed = .393 * originalRed + .769 * originalGreen + .189 * originalBlue
        // sepiaGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue
        // sepiaBlue = .272 * originalRed + .534 * originalGreen + .131 * originalBlue

        // Be sure the result is an integer between 0 and 255, inclusive
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // For each row
        // Swap pixels horizontally
        // For the first half of the row
            // Swap the jth pixel with width - 1 - jth pixel
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a new image that will later be copied into the original image
    RGBTRIPLE new_image[height][width];

    // Loop through all pixels

        // Initialize a red, green, and blue integer
        // Initialize a counter

        // Loop over the surrounding pixels
            // If on pixel array
                // Increase the red, green, and blue integers as needed
                // Increase counter

        // Find the average of each red, green, and blue value

        // Save these averages into the "new_image"

    // Copy the pixels from new_image to image

    return;
}
