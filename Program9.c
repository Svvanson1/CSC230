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

	//Empty Array for values
	int *digit;
	//Turn integer into array with each element as a digit
	digit = toArray(phoneNumber);

	//Empty chars
	char *mword0, *mword1, *mword2, *mword3, *mword4, *mword5, *mword6;

	for (level0 = 0; level0 < 3; level0++) {
		mword0 = numberLetters[digit[0]][level0];
		for (level1 = 0; level1 < 3; level1++) {
			mword1 = numberLetters[digit[1]][level1];
			for (level2 = 0; level2 < 3; level2++) {
				mword2 = numberLetters[digit[2]][level2];
				for (level3 = 0; level3 < 3; level3++) {
					mword3 = numberLetters[digit[3]][level3];
					for (level4 = 0; level4 < 3; level4++) {
						mword4 = numberLetters[digit[4]][level4];
						for (level5 = 0; level5 < 3; level5++) {
							mword5 = numberLetters[digit[5]][level5];
							for (level6 = 0; level6 < 3; level6++) {
								mword6 = numberLetters[digit[6]][level6];
								fprintf(fptr, "%c%c%c%c%c%c\n", mword0, mword1, mword2, mword3, mword4, mword5, mword6);
							}
						}
					}
				}
			}
		}
	}

	fclose(fptr);

}

//Split number into array of 1 digit numbers
int * toArray(int number)
{
	int n = log10(number) + 1;
	int i;
	int *numberArray = calloc(n, sizeof(int));
	for (i = 0; i < n; ++i, number /= 10)
	{
		numberArray[i] = number % 10;
	}
	return numberArray;
}
