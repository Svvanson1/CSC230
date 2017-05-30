/*
Benjamin Swanson
5/30/2017
Module 1 - Programming Discussions
*/

//Include files
#include <stdio.h> 

//Create main function
int main(void)
{
	//Declare the integer which the radius will be stored
	int radius, diameter;
	//Declare a float with PI stored inside of it
	float PI = 3.1415;
	//Declare floats for the area and circumfrence
	float area, circum;

	//Scan input from the user and store it in radius
	printf("Enter radius\n");
	scanf("%d", &radius);

	//The area of a circle is defined as P*r^2
	area = PI * radius * radius;
	printf("\nArea of this circle : %f", area);

	//The circumfrence of a circle is defined as 2*pi*r
	circum = 2 * PI * radius;
	printf("\nCircumfrence of this circle : %f", circum);
	
	//Extra printf to add empty line
	printf(" \n");


} // end function main
