#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Point.h"

Point::Point() {
	x = y = 0;
}

Point::~Point() {
	
}

Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}

void Point::input() {
	printf("Введите координату x:\n");
	scanf("%lf", &x);
	printf("Введите координату y:\n");
	scanf("%lf", &y);
}

void Point::output() {
	printf("Координаты точки: (%lf, %lf)", x, y);
}
