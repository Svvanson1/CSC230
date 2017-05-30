/*
Benjamin Swanson
5/30/2017
MODULE 1: CHAPTER 2 PROGRAM
*/

//Include files
#include <stdio.h> 

//Create main function
int main(void) 
{
	//Declare the integer which the user input will be stored
	int integer1;

	//Scan input from the user and store it in integer1
	printf("Enter integer to see if it is odd or even\n");
	scanf("%d", &integer1);

	//If the inputted integer is an even
	if (integer1 % 2 == 0)
		printf("%d is even\n", integer1);
	//If it's not even it must be odd so we run this code
	else
		printf("%d is odd\n", integer1);

	return 0;

} // end function main
