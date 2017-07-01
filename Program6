/*
Benjamin Swanson
6/30/2017
MODULE 3: CHAPTER 7 PROGRAM

NOTE: I used the code out of the text book as a base
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototypes
void shuffle(unsigned int wDeck[][FACES]); // shuffling modifies wDeck
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[], char *wfSuit[], char *wfFace[]);
void onePair(const char *wfSuit[], const char *wfFace[]);
void twoPair(const char *wfSuit[], const char *wfFace[]);
void threeKind(const char *wfSuit[], const char *wfFace[]);
void fourKind(const char *wfSuit[], const char *wfFace[]);
void isFlush(const char *wfSuit[], const char *wfFace[]);
void isStraight(const char *wfSuit[], const char *wfFace, const char *wFace);

int main(void)
{
	// initialize deck array
	unsigned int deck[SUITS][FACES] = { 0 };

	srand(time(NULL)); // seed random-number generator

	shuffle(deck); // shuffle the deck

	 // initialize suit array        			                  
	const char *suit[SUITS] =
	{ "Hearts", "Diamonds", "Clubs", "Spades" };

	// initialize face array                   
	const char *face[FACES] =
	{ "Ace", "Deuce", "Three", "Four",
		"Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King" };

	//Initialize hand
	char *fSuit[5];
	char *fFace[5];

	//Run the functions
	deal(deck, face, suit, fFace, fSuit); 
	onePair(fSuit, fFace);
	twoPair(fSuit, fFace);
	threeKind(fSuit, fFace);
	fourKind(fSuit, fFace);
	isFlush(fSuit, fFace);
	//isStraight(fSuit, fFace, face);

	system("pause");
	return 0;
}

// shuffle cards in deck
void shuffle(unsigned int wDeck[][FACES])
{
	// for each of the cards, choose slot of deck randomly
	for (size_t card = 1; card <= CARDS; ++card) {
		size_t row; // row number
		size_t column; // column number

	    // choose new random location until unoccupied slot found
		do {
			row = rand() % SUITS;
			column = rand() % FACES;
		} while (wDeck[row][column] != 0); // end do...while

        // place card number in chosen slot of deck
		wDeck[row][column] = card;
	}
}

// deal cards in deck
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[], char *wfSuit[], char *wfFace[])
{
	int r; //row
	int c; //column
	int i; //i for looping
	int myCard; //counts total cards

	//Deal for handSize
	for (i = 0, myCard = 1; myCard <= 5; i++, myCard++) { //Loops for hand Size
		for (r = 0; r < 4; r++) { //Loop for rows
			for (c = 0; c < 13; c++) { //Loop for columns
				if (wDeck[r][c] == myCard) { 
					wfSuit[i] = wSuit[r]; //Assign from deck into hand for suit
					wfFace[i] = wFace[c]; //Assign from deck into hand for face
				}
			}
		}
	}

	int n; //n to be used in print loop

	//Prints hand
	for (n = 0; n < 5; n++) {
		printf("%10s of %-8s\n", wfFace[n], wfSuit[n]);
	}

}


//Function to find if there is one pair
void onePair(const char *wfSuit[], const char *wfFace[]) {
	
	
	int numPairs = 0;
	int i, j;

	//If first card matches last card, I kept getting out of bound index so I just put this in
	if (wfFace[0] == wfFace[4]) { 
		numPairs++;
	}

	//Loop to check if the rest of the cards are matching
	for (i = 0; i < 4; i++) { 
		for (j = i + 1; j < 4; j++) {
			if (wfFace[i] == wfFace[j]) {
				numPairs++;
			}
		}
	}

	//Print if the user has a pair
	if (numPairs > 0) {
		printf("You have a pair \n");
	}
	else {
		printf("You do not have any pairs \n");
	}

}

//Function to find if there is two pairs
void twoPair(const char *wfSuit[], const char *wfFace[]) {


	int numPairs = 0;
	int i, j;

	//If first card matches last card, I kept getting out of bound index so I just put this in
	if (wfFace[0] == wfFace[4]) {
		numPairs++;
	}

	//Loop to check if the rest of the cards are matching
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 4; j++) {
			if (wfFace[i] == wfFace[j]) {
				numPairs++;
			}
		}
	}

	//Print if the user has a pair
	if (numPairs > 1) { //Code is the same as onePair except we are checking greater than 1
		printf("You have 2 pairs \n");
	}
	else {
		printf("You do not have 2 pairs\n");
	}

}

//Function to find if there are 3 of a kind
void threeKind(const char *wfSuit[], const char *wfFace[]) {
	int myCard, i, k, n;
	int pairs = 0; //Total pairs

	//Compare Values
	for (myCard = 0; myCard < 3; myCard++) {
		for (i = myCard + 1; i < 5; i++) {
			if (wfFace[myCard] == wfFace[i]) {
				for (n = i + 1; n < 5; n++) {
					if (wfFace[i] == wfFace[n]) {
						pairs++;
					}
				}
			}
		}
	}

	if (pairs == 1) {
		printf("Your hand contains 3 of a kind! \n");
	}
	else {
		printf("Your hand does not contain 3 of a kind \n");
	}

}

//Function to find if there are 4 of a kind
void fourKind(const char *wfSuit[], const char *wfFace[]) {
	int myCard, i, k, n;
	int pairs = 0; //Total pairs

	for (myCard = 0; myCard < 2; myCard++) {
		for (i = myCard + 1; i < 5; i++) {
			if (wfFace[myCard] == wfFace[i]) {
				for (n = i + 1; n < 5; n++) {
					if (wfFace[i] == wfFace[n]) {
						pairs++;
					}
				}
			}
		}
	}

	if (pairs == 2) {
		printf("Your hand contains 4 of a kind! \n");
	}
	else {
		printf("Your hand does not contain 4 of a kind \n");
	}

}

//Function to find if there is a flush
void isFlush(const char *wfSuit[], const char *wfFace[]) {
	int i;
	int pairs = 0;

	//All values must match so we dont need to bother looping beyond index [0] in checking
	for (i = 1; i < 5; i++) {
		if (wfSuit[0] == wfSuit[i]) {
			pairs++;
		}
	}

	if (pairs == 5) {
		printf("You have a flush! \n");
	}
	else {
		printf("You do not have a flush! \n");
	}
}

//Function to find if there is a straight
void isStraight(const char *wfSuit[], const char *wfFace, const char *wFace) {

}


