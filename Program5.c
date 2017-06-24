/*
Benjamin Swanson
6/24/2017
MODULE 2: CHAPTER 6 PROGRAM
*/

//Include files
#include <stdio.h> 

//Create main function
int main(void)
{
	//Declare and initialize an array with ten empty seats to represent the entire plane.
	int seats[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	//Declare a variable to represent the number of economy class seats filled.
	int econ = 0;

	//Declare a variable to represent the econ seat numbers which will be printed
	int econSeats = 6;

	//Declare a variable to represent the number of first class seats filled.
	int first = 0;

	//Declare a variable to represent the econ seat numbers which will be printed
	int firstSeats = 1;

	//Declare a variable to represent an input which will be taken throughout the loop
	int input = 0;

	//Declare a variable which will be used in the inner input if a given seat is full
	int input1 = 0;


	//While at least one seat is unfilled we loop
	while(first <= 5 || econ <= 5) {

		//Get input from user and store it in input variable
		printf("Enter 1 for first class seat, Enter 2 for econ seat\n");
		scanf("%d", &input);


			if (input == 1 && first < 5) { //If 1 was entered and there is a first class seat empty
				//Print the boarding pass
				printf("Your seat number: %d, Your seating section: First class\n", firstSeats);
				//Update the array
				seats[firstSeats] = 1;
				//Increment the seats
				first++;
				firstSeats++;
			}
			if (input == 1 && first >= 5) { //If 1 was entered and all the first class seats are full
				
				//Ask the user if they would like to be seated in econ and store in input
				printf("The section you have requested is full press 1 if you would like to be placed in Econ, press anything else to exit\n");
				scanf("%d", &input1);

				//If the user has selected yes
				if (input1 == 1) {
					printf("Your seat number: %d, Your seating section: Econ\n", econSeats);
					//Update the array
					seats[econSeats] = 1;
					//Increment the seats
					econ++;
					econSeats++;
				}
				else { //The user has entered something else and wishes to exit
					printf("Next flight leaves in 3 hours!\n");
				}

			}
			if (input == 2 && econ < 5) { //If 2 was entered and theres is a econ seat empty
				
				//Print the boarding pass
				printf("Your seat number: %d, Your seating section: Econ\n", econSeats);
				//Update the array
				seats[econSeats] = 1;
				//Increment the seats
				econ++;
				econSeats++;


			}
			if (input == 2 && econ >= 5) { //If 2 was entered and the econ seats are full

				//Ask the user if they would like to be seated in first class and store in input
				printf("The section you have requested is full press 1 if you would like to be placed in First class, press anything else to exit\n");
				scanf("%d", &input1);

				//If the user has selected yes
				if (input1 == 1) {
					printf("Your seat number: %d, Your seating section: First class\n", firstSeats);
					//Update the array
					seats[firstSeats] = 1;
					//Increment the seats
					first++;
					firstSeats++;
				}
				else { //The user has entered something else and wishes to exit
					printf("Next flight leaves in 3 hours!\n");
				}
			}
	}

} // end function main
