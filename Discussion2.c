/*
CSC 230
Benjamin Swanson
6/22/2017
MODULE 2: Programming Discussion
*/

//Include files
#include <stdio.h> 

//Create main function
int main(void)
{
	//Declare the currentInt variable which will act as a counter of sorts to check if a certain number is odd or even.
	int currentInt = 2;

	//Declare sum variable which will store the total sum of all the even integers
	int sum = 0;

	//While the currentInt is below 31 the loop will run, this will only let the counter interate until it reaches 30
	while(currentInt != 31) {

		//If the current int is even we will add it to the sum
		if (currentInt % 2 == 0) {
			sum += currentInt;
		}

		//We will increment the currentInt variable so that we get the next number.
		currentInt++;
	
	}//end while loop

	//Print the calculated sum after the loop has run.
	printf("\nThe Sum is: %d ", sum);


} // end function main
