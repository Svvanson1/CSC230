/*
Benjamin Swanson
6/22/2017
MODULE 2: CHAPTER 5 PROGRAM
*/

//Include files (note how math is included)
#include <stdio.h> 
#include <math.h>

//Define our functions to be used later
double roundToInteger(double);
double roundToTenths(double);
double roundToHundreths(double);
double roundToThousandths(double);

//Create main function
int main(void)
{
	//Declare i which will be looped in the following for loop
	int i;

	//Declare numLoops which will be inputted by the user to define how many times they would like to process a number
	int numLoops;

	//Declare a double, num, which will values will be stored in from the functions
	 double num;

	//Get User input for the for loop.
	printf("How many times would you like to process?");
	scanf("%d", &numLoops);

	//The for loop which will run the code until we've inputted the amout of integers that the user has defined
	for (i = 0; i < numLoops; i++) {

		//Get user input for the actual number which will be inputted into each function
		printf("Enter your number: ");
		scanf("%lf", &num);

		//Print all the values after running them through their respective functions
		printf("%f => Int: %f \n", num, roundToInteger(num));
		printf("%f => Tens: %f \n", num, roundToTenths(num));
		printf("%f => Hundreds: %f \n", num, roundToHundreths(num));
		printf("%f => Thousands: %f \n", num, roundToThousandths(num));
	} // end for loop

	return 0;
} // end function main

//Declare the methods used/declared in the above code

double roundToInteger(double x) {
	return floor(x + .5);
}

double roundToTenths(double x) {
	return floor(x * 10 + .5) / 10; 
}

double roundToHundreths(double x) {
	return floor(x * 100 + .5) / 100; 
}

double roundToThousandths(double x) {
	return floor(x * 1000 + .5 ) / 1000; 
}
