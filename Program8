/*
Benjamin Swanson
7/15/2017
MODULE 4: CHAPTER 10 PROGRAM
*/


//Prototpe functions
void pack(char c1, char c2, char c3, char c4);
void bits(unsigned value);

//Includes
#include <stdio.h>

int main(void)
{
	//Declare empty variables for the chars we will scan.
	char mychar1, mychar2, mychar3, mychar4;

	//Get the chars from user and print them in bit form
	printf("Enter all the chars \n");
	scanf("%c %c %c %c", &mychar1, &mychar2, &mychar3, &mychar4);
	bits(mychar1);
	bits(mychar2);
	bits(mychar3);
	bits(mychar4);


	//Print the packed characters
	pack(mychar1, mychar2, mychar3, mychar4);

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

void pack(char c1, char c2, char c3, char c4) {
	
	unsigned packed;

	//Move 8 bits each time
	packed = c1;

	packed <<= 8;

	packed |= c2;

	packed <<= 8;

	packed |= c3;

	packed <<= 8;

	packed |= c4;

	//Print value
	printf( "%c\n", packed);

	bits(packed);

}
