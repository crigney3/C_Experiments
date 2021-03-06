#include "stdafx.h"

//Use these to create a bool type
#define bool char
#define FALSE 0
#define TRUE 1

//Apparently, you have to declare functions up here.
//Useful, I'll be able to keep an index of functions!
bool badSearch(int n);

int main()
{
	bool running = TRUE;
	char low = 8;
	int high = 256, med = 64;
	printf("Hello World!\n");

	if (running) {
		printf("%d", (low * med) + high);
	}

	if (badSearch(32)) {
		printf("\nElement Found!");
	}
	else {
		printf("\nNot Found!");
	}

    return 0;
}

bool badSearch(int n) {
	int data[20];
	data[0] = 10;
	if (n == data[0]) {
		return TRUE;
	}
	//Stolen from Stack Overflow - sizeof gets the size in bytes of an element.
	//the length of an array is the number of bytes in the array divided by the number
	//of bytes in each element.
	size_t data_length = sizeof(data) / sizeof(data[0]);

	for (int i = 1; i < data_length; i++) {
		data[i] = data[i - 1] + 10;
		if (data[i] == n) {
			return TRUE;
		}
	}

	return FALSE;
}

