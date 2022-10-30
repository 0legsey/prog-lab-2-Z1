#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include "Segment.h"

Segment::Segment() {
	a.x = a.y = 0;
	b.x = b.y = 0;
	length = 0;
}

Segment::~Segment() {
	
}

Segment::Segment(Point a, Point b) {
	this->a = a;
	this->b = b;
	this->length = length_calc();
}

void Segment::input() {
	printf("Введите координаты первой точки через пробел:\n");
	scanf("%lf%lf", &a.x, &a.y);
	printf("Введите координаты второй точки через пробел:\n");
	scanf("%lf%lf", &b.x, &b.y);
	length = length_calc();
}

void Segment::output() {
	printf("\nКоординаты первой точки: (%lf, %lf)\n", a.x, a.y);
	printf("Координаты второй точки: (%lf, %lf)\n", b.x, b.y);
	printf("Длина отрезка равна %lf", length);
}

double Segment::length_calc() {
	double len;
	len = pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
	return sqrt(len);
}