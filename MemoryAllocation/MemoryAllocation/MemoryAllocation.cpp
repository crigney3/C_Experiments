// MemoryAllocation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>

#define bool char
#define true 1
#define false 0

typedef struct {
	int x;
	int y;
} point;

typedef struct {
	point pos;
	int radius;
} circleObj;

bool circleColliding(circleObj* a, circleObj* b);

//Objective: check circle collision. If colliding, remove and deallocate the circles.
int main()
{
	circleObj * circle1 = (circleObj*)malloc(sizeof(circleObj));
	circleObj * circle2 = (circleObj*)malloc(sizeof(circleObj));

	point * point1 = (point*)malloc(sizeof(point));
	point * point2 = (point*)malloc(sizeof(point));

	point1->x = 10;
	point1->y = 20;
	circle1->radius = 30;
	circle1->pos = *point1;

	point2->x = 20;
	point2->y = 45;
	circle2->radius = 50;
	circle2->pos = *point2;

	if (circleColliding(circle1, circle2)) {
		free(circle1);
		free(circle2);
		free(point1);
		free(point2);

		printf("Circles Collided and were removed.");
	}
	else {
		printf("Circle did not collide.");
	}
    return 0;
}

bool circleColliding(circleObj* a, circleObj* b) {
	double * distance = (double*)malloc(sizeof(double));
	double * radiusCheck = (double*)malloc(sizeof(double));

	*distance = sqrt(((b->pos.x - a->pos.x) * (b->pos.x - a->pos.x)) + ((b->pos.y - a->pos.y) * (b->pos.y - a->pos.y)));
	*radiusCheck = a->radius + b->radius;

	if (*distance <= *radiusCheck) {
		free(distance);
		free(radiusCheck);
		return true;
	}
	free(distance);
	free(radiusCheck);
	return false;
}

