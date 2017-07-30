/*
Benjamin Swanson
7/29/2017
MODULE 4: CHAPTER 11 PROGRAM
*/

#include <stdio.h>

//Min calc used
#define MINIMUM2(n1, n2) (n1 < n2 ? n1:n2)

int main(void) {
	//Vairables to store input
	int n1, n2;
	int temp;

	//Get input from user
    printf("Enter 2 numbers");
	scanf("%d%d", &n1, &n2);

	//Perform MINIMUM2 on scanned ints and store result in tempm and print those results
	temp = MINIMUM2(n1, n2);
	printf("%d", temp);
	getchar();

	printf("\n");
	return 0;

}
