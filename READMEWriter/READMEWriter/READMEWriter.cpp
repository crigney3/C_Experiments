// READMEWriter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

#define bool char
#define true 1
#define false 0

char * readFile(char filename[]);
bool writeToFile(char filename[], char toWrite[]);
bool replaceInFile(char filename[], char toWrite[], char toReplace[]);

int main()
{
    return 0;
}

char * readFile(char filename[]) {
	FILE * fp = fopen(filename, "r");
	char buff[255];
	fclose(fp);
	return buff;
}

bool writeToFile(char filename[], char toWrite[]) {
	FILE * fp = fopen(filename, "r+");
	fclose(fp);
}

bool replaceInFile(char filename[], char toWrite[], char toReplace[]) {
	FILE * fp = fopen(filename, "r+");
	fclose(fp);
}

