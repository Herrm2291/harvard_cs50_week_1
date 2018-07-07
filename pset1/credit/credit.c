#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// Created an undefined long long variable named "cardNumber"
	long long cardNumber;

	//  Created a do while loop to insure that the user provides a valid card number as listed in the specification, which is a non-negative long long number
	do
	{
	    cardNumber = get_long_long("Credit card number: ");
	}
	while (cardNumber < 0);

	// Created a conditional statement to check that the number given is of valid credit card range and length

	// If card number starts with 34 or 37 and has 15 digits = American Express
	if ((cardNumber >= 340000000000000 && cardNumber < 350000000000000) || (cardNumber >= 370000000000000 && cardNumber < 380000000000000))
	    printf("AMEX\n");
	// If card number starts with 51, 52, 53, 54 or 55 and has 16 digits = MasterCard
	else if (cardNumber >= 5100000000000000 && cardNumber < 5600000000000000)
	    printf("MASTERCARD\n");
	// If card number starts with 4 and has either 13 or 16 digits = Visa
	else if (cardNumber >= 4000000000000 && cardNumber < 5000000000000) || (cardNumber >= 4000000000000000 && cardNumber < 5000000000000000))
	    printf("VISA\n");
	else
	    printf("INVALID\n");

	// Getting every other digit beginning with the 2nd from last digit for credit card numbers with 16 digits
	long long eighthDigitTemp = (cardNumber / 10);
	long long eighthDigit = eighthDigitTemp % 10;
	long long seventhDigitTemp = (eighthDigitTemp / 100);
	long long seventhDigit = seventhDigitTemp % 10;
	long long sixthDigitTemp = (seventhDigitTemp / 100);
	long long sixthDigit = sixthDigitTemp % 10;
	long long fifthDigitTemp = (sixthDigitTemp / 100);
	long long fifthDigit = fifthDigitTemp % 10;
	long long fourthDigitTemp = (fifthDigitTemp / 100);
	long long fourthDigit = fourthDigitTemp % 10;
	long long thirdDigitTemp = (fourthDigitTemp / 100);
	long long thirdDigit = thirdDigitTemp % 10;
	long long secondDigitTemp = (thirdDigitTemp / 100);
	long long secondDigit = secondDigitTemp % 10;
	long long firstDigitTemp = (secondDigitTemp / 100);
	long long firstDigit = firstDigitTemp % 10;
// 	long long b = (cardNumber / 1000) % 10;
// 	long long c = (cardNumber / 100000) % 10;
// 	long long d = (cardNumber / 10000000) % 10;
// 	long long e = (cardNumber / 1000000000) % 10;
// 	long long f = (cardNumber / 100000000000) % 10;
// 	long long g = (cardNumber / 10000000000000) % 10;
// 	long long h = (cardNumber / 1000000000000000) % 10;

	// Printing every other digit beginning with the 2nd from last digit for credit card numbers with 16 digits
// 	printf("Eighth Digit: %llu\n", eighthDigit);
// 	printf("Seventh Digit: %llu\n", seventhDigit);
// 	printf("Sixth Digit: %llu\n", sixthDigit);
// 	printf("Fifth  Digit: %llu\n", fifthDigit);
// 	printf("Fourth Digit: %llu\n", fourthDigit);
// 	printf("Third Digit: %llu\n", thirdDigit);
// 	printf("Second Digit: %llu\n", secondDigit);
// 	printf("First Digit: %llu\n", firstDigit);

	// Multiplying every other digit by 2, starting with the number’s second-to-last digit
	long long eighthDigitTimesTwo = eighthDigit * 2;
	long long seventhDigitTimesTwo = seventhDigit * 2;
	long long sixthDigitTimesTwo = sixthDigit * 2;
	long long fifthDigitTimesTwo = fifthDigit * 2;
	long long fourthDigitTimesTwo = fourthDigit * 2;
	long long thirdDigitTimesTwo = thirdDigit * 2;
	long long secondDigitTimesTwo = secondDigit * 2;
	long long firstDigitTimesTwo = firstDigit * 2;

	// Printing the result of every other digit multiplied by 2, starting with the number’s second-to-last digit
// 	printf("Eighth Digit: %llu\n", eighthDigitTimesTwo);
// 	printf("Seventh Digit: %llu\n", seventhDigitTimesTwo);
// 	printf("Sixth Digit: %llu\n", sixthDigitTimesTwo);
// 	printf("Fifth  Digit: %llu\n", fifthDigitTimesTwo);
// 	printf("Fourth Digit: %llu\n", fourthDigitTimesTwo);
// 	printf("Third Digit: %llu\n", thirdDigitTimesTwo);
// 	printf("Second Digit: %llu\n", secondDigitTimesTwo);
// 	printf("First Digit: %llu\n", firstDigitTimesTwo);

    //

}