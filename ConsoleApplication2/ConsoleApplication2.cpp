// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Windows.h"
#include <stdio.h>

int main(int argc, char **argv) {

	// Declare our counter variable
	int i;

	// Set our counter to 99
	// While our counter is greater than 0,
	// Loop over the song below and decrement our counter
	for(i=99; i>0; i--) {
		if (i > 1) {
			printf("%i bottles of beer on the wall\n", i);
			printf("%i bottles of beer...\n", i);
		} else {
			printf("%i bottle of beer on the wall\n", i);
			printf("%i bottle of beer...\n", i);
		}

		printf("You take one down, pass it around...\n");

		switch(i) {
		case 2:
			printf("%i bottle of beer on the wall\n", (i-1));
			break;
		case 1:
			printf("No more bottles of beer on the wall!\n");
			break;
		default:
			printf("%i bottles of beer on the wall\n", i);
			break;
		};

		// Place some spaces in between each phrase
		printf("\n\n");

		// Sleep 100 milliseconds or a tenth of a second so that we
		// get a slight pause between eache bottle of beer phrase being
		// printed to the screen
		Sleep(100);

	}
	// Sleep for 5 seconds so we can view the verbiage of the
	// last iterations
	Sleep(5000);
	return 0;
}
