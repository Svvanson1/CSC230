/*
Benjamin Swanson
7/19/2017
MODULE 4: CHAPTER 11 PROGRAM
*/

//Include files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Prototype Functions
int *toArray(int number);

//Create main function
int main(void) {
	//Levels which will be used in the word generation loop
	int level0, level1, level2, level3, level4, level5, level6;

	//2D Array for number - letter values
	char numberLetters[10][3] = {
		{ '0','0','0' },
		{ '1','1','1' },
		{ 'A','B','C' },
		{ 'D','E','F' },
		{ 'G','H','I' },
		{ 'J','K','L' },
		{ 'M','N','O' },
		{ 'P','R','S' },
		{ 'T','U','V' },
		{ 'W','X','Y' } };
	
	//For writing to file
	FILE *fptr;
	fptr = fopen("output.txt", "w");
	if (fptr == NULL) {
		printf("Error in opening file!");
	}

	//Get input from user
	int phoneNumber;
	printf("Please enter the number to be converted into possible words. NOTE: Please avoid using 1s or 0s, and enter the phone number without a dash(-)");
	scanf("%d", &phoneNumber);


}


int *toArray(int number) {
	int n = log10(number) + 1;
	int i;
	char *numberArray = calloc(n, sizeof(char));
	for (i = 0; i < n; ++i, number /= 10){
		numberArray[i] = number % 10;
	}
	return numberArray;
}
