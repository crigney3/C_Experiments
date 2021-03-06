// Unions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define bool char
#define true 1
#define false 0

//The challenge is to make a union of 21 characters and 6 ints that stores them
//all at one pointer, with maximum memory efficiency
union ints {
	int stored[6];
	char intChars[21];
	//Spent a while debugging before realizing order matters in unions!
};

int main()
{
	union ints intCharacters = { { 1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0 } };
	printf("[");
	for (int i = 0; i < 19; i++) {
		printf("%c, ", intCharacters.intChars[i]);
	}
	printf("%c]\n", intCharacters.intChars[19]);

	printf("%s\n", intCharacters.intChars);
    return 0;
}

