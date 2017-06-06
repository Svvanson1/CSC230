/*
CSC 230
Benjamin Swanson
6/6/2017
MODULE 1: CHAPTER 3 PROGRAM
*/

//Include files
#include <stdio.h> 

//Create main function
int main(void)
{
	//Declare the variable which will be used initially in the loop, and be used for gasUsed in the calculation algorithm
	float gasUsed = 10;

	//Declare the mpg variable which will be returned, and the variable which will be used for the distance in the calculation algorithm
	float mpg, distance;


	//While loop to run the program until the user wishes to exit
	while (gasUsed != -1) {

		//Scan input from the user and store it in gasUsed
		printf("\nEnter gas used in gallons (-1 to exit)\n");
		scanf("%f", &gasUsed);

		//If the user has inputted -1 then break
		if (gasUsed == -1)
			break;
		//Else run the rest of the code
		else
			//Scan input from the user and store it in distance
			printf("Enter distance travelled in miles\n");
			scanf("%f", &distance);

			//Do the calculation for MPG
			mpg = distance / gasUsed;

			//Return the calculated value
			printf("\nMiles Per Gallon: %f", mpg);

	}//end while loop

} // end function main
