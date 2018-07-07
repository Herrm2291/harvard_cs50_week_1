#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// Created an undefined integer variable named "changeOwed" which stores the users input value for how much change is owed
	float changeOwed;

	// Created int variables for the different coin options
	int quarter = 25;
	int dime = 10;
	int nickle = 5;
	int penny = 1;

	// Created an integer variable named "coinsUsed" which will be used to print the total number of coins used
	int coinsUsed = 0;

	//  Created a do while loop to insure that the user provides a valid number as listed in the specification, which is a non-negative float
	do
	{
		changeOwed = get_float("How much change is owed? ");
	}
	while (changeOwed < 0);

	// Created an integer variable named "changeTotal" which is the result of changeOwed * 100 that is then rounded via the <math.h> library
	int changeTotal = round(changeOwed * 100);

	// Created a conditional while loop to increment the amount of coins used while also deducting from the total amount of change owed
	while (changeTotal > 0)
	{
		if ((changeTotal - quarter) >= 0)
		{
			coinsUsed++;
			changeTotal -= quarter;
		}

		else if ((changeTotal - dime) >= 0)
		{
			coinsUsed++;
			changeTotal -= dime;
		}

		else if ((changeTotal - nickle) >= 0)
		{
			coinsUsed++;
			changeTotal -= nickle;
		}

		else if ((changeTotal - penny) >= 0)
		{
			coinsUsed++;
			changeTotal -= penny;
		}
	}
	printf("%i\n", coinsUsed);
}

