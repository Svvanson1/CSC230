/*
Benjamin Swanson
7/6/2017
Module 3 Assignment 2
*/

//Include files
#include <stdio.h> 
#include <string.h>

//Create main function
int main(void)
{
	//Declare the arrays which will contain the inputted words
	char input1[50];
	char input2[50];

	//Get input from the user for input1 and input2
	printf("Enter the first word to compare (Max 50 chars): \n");
	fgets(input1, 50, stdin);
	printf("Enter the second word to compare (Max 50 chars): \n");
	fgets(input2, 50, stdin);

	//Declare a variable to store the result of the comparison
	int comparison;

	//run strcomp to compare the result and store it in the variable
	comparison = strcmp(input1, input2);

	//Check the calculated comparison
	if (comparison == 0) {
		printf("Strings are the same. \n");
	}
	else if (comparison < 0) {
		printf("Second String is greatest. \n");
	}
	else {
		printf("First String is greatest. \n");
	}

}
