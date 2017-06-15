/*
CSC 230
Benjamin Swanson
6/15/2017
MODULE 2: CHAPTER 1 PROGRAM
*/

//Include files
#include <stdio.h> 

//Create main function
int main(void)
{
	//Declare the variable which will be the total sum calculated in the loop
	int totalSum = 0;

	//Declare the variable which will be the tempSum in the loop which values from the scanner will be stored temporarily 
	int tempSum = 0;

	//Declare the variable which will store the amount of integers in the sequence
	int numInts = 0;

	//Declare the variable which will store the calculated average.
	float avg;


	//While loop to run the program until the user wishes to exit
	while (tempSum != -1) {

		//Scan input from the user and store it in tempSum
		printf("\nEnter an integer to be added to the sequence (-1 to exit)\n");
		scanf("%d", &tempSum);


		//If the user has inputted -1 then break
		if (tempSum == -1)
			break;
		//Else run the rest of the code
		else
			//Add the value inputed in the tempSum to the totalSum
			totalSum += tempSum;

			//Increment the numInts so we know the total number of terms
			numInts++;

	}//end while loop

	//Perform the average calculation and then print the result.
	avg = totalSum / numInts;
	printf("\nThe Average is: %f ", avg);

} // end function main

