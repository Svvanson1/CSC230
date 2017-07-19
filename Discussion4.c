/*
Benjamin Swanson
7/19/2017
MODULE 4: Discussion
*/

//Prototype functions
void bits(unsigned value);

//Includes
#include <stdio.h>

int main(void)
{
	//Declare empty variables for the integer we will shift
	int myNum;

	//Get the chars from user and print them in bit form
	printf("Enter the int to shift \n");
	scanf("%d", &myNum);

	//Print bits
	printf("Number in bit form: ");
	bits(myNum);

	//Shift right 4 bits
	myNum >>= 4;

	//Print bits
	printf("Number bit form after shift");
	bits(myNum);

	//Pause so we don't instantly close
	system("PAUSE");
	return 0;
}

//Function for printing value in bit form
void bits(unsigned value) {

	//set the bit mask so we compare last
	unsigned x, display = 1 << 31;

	printf(" %7u = ", value);

	//loop for num of bits in unsigned (32)
	for (x = 1; x <= 32; x++) {
		//test the last bit and assign it to either 1 or 0
		putchar(value & display ? '1' : '0');

		//Move the bits to the left 1
		value <<= 1;

		//For every byte put a space
		if (x % 8 == 0) {
			putchar(' ');
		}


	}
	//End line
	putchar('\n');
}
