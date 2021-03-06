// StructsAndPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define bool char;
#define true 1;
#define false 0;



//Basic Struct example
struct rect {
	int x;
	int y;
	int width;
	int height;
};

//Struct callable like C#
//Seems the better way to do it
typedef struct {
	int x;
	int y;
	int width;
	int height;
} rectDef;

char checkColliding(rectDef rectA, rectDef rectB);
char pointerTests();
void subtractTwo(int * n);

int main()
{
	struct rect rect1;
	rect1.x = 5;
	rect1.y = 10;
	rect1.width = 200;
	rect1.height = 100;
	printf("\n%d", rect1.width);

	rectDef rect2;
	rect2.x = 10;
	rect2.y = 11;
	rect2.width = 100;
	rect2.height = 200;
	printf("\n%d", rect2.width);

	rectDef rect3;
	rect3.x = 15;
	rect3.y = 100;
	rect3.width = 50;
	rect3.height = 200;
	printf("\n%d", rect3.width);

	if (checkColliding(rect3, rect2)) {
		printf("\nRectangles are colliding!");
	}

	pointerTests();
    return 0;
}

//Apparently, if a function takes two arguments, passing in a struct
//with two arguments works.
char checkColliding(rectDef rectA, rectDef rectB) {
	if (rectA.x < rectB.x + rectB.width &&
		rectA.x + rectA.width > rectB.x &&
		rectA.y < rectB.y + rectB.height &&
		rectA.y + rectA.height > rectB.y) {
		return true;
	}
	else {
		return false;
	}
}

char pointerTests() {
	int a = 1;
	int * aPointer = &a;
	a += 1;
	*aPointer += 1;
	printf("\nA equals %d and the pointer is %p", a, aPointer);

	int b = 10;
	printf("\nb is %d", b);
	subtractTwo(&b);
	b += 10;
	printf("\nb retains the change from the function, plus 10: %d", b);
	return 1;
}

//Void functions that modify global variables must use pointers
void subtractTwo(int * n) {
	(*n) -= 2;
	printf("\nAfter subtracting, n is %d", *n);
}

