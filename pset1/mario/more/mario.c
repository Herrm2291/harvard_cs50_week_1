#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// Created an undefined integer variable named "height"
	int height;

	//  Created a do while loop to insure that the user provides a valid number as listed in the specification, which is a non-negative integer no greater than 23
	do
	{
		height = get_int("Height of the half-pyramid: ");
	}
	while (height < 0 || height > 23);

	// The pattern for the left half pyramid is that as each row is added, the number of spaces decreases by 1 and the number of hashes increases by 1
	// Two spaces act as the gap between the left and right half pyramids
	// The pattern for the right half pyramid is that as each row is added, the number of hashes increases by 1 and there is no need for spaces

	// Created a for loop to print each row
	for (int row = 0; row < height; row++)
	{
		// Nested another for loop inside of the row for loop to print the spaces
		for (int spaces = height - row; spaces > 1; spaces--)
		{
			printf(" ");
		}
		// Nested another for loop inside of the row for loop to print the hashes for the left half of the pyramid
		for (int hashes = 0; hashes < row + 1; hashes++)
		{
			printf("#");
		}
		// 2 spaces added for the gap between the left and right half pyramids
		printf("  ");

		// Nested another for loop inside of the row for loop to print the hashes for the right half of the pyramid
		for (int hashes = 0; hashes < row + 1; hashes++)
		{
			printf("#");
		}
		printf("\n");
	}
}

