#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include "Square.h"

Square::Square() {
	b.x = b.y = 0;
	d.x = d.y = 0;
	diagonal = Segment();
}

Square::~Square() {

}

Square::Square(Point b, Point d) {
	this->b = b;
	this->d = b;
	this->diagonal = Segment(b, d);
}

void Square::input() {
	printf("¬ведите координаты первой точки диагонали через пробел:\n");
	scanf("%lf%lf", &b.x, &b.y);
	printf("¬ведите координаты второй точки диагонали через пробел:\n");
	scanf("%lf%lf", &d.x, &d.y);
	diagonal = Segment(b, d);
}

void Square::output() {
	printf(" оординаты первой точки диагонали: (%lf, %lf)\n", b.x, b.y);
	printf(" оординаты второй точки диагонали: (%lf, %lf)\n", d.x, d.y);
	printf("ƒлина диагонали равна %lf\n", diagonal.length);
	printf("ѕериметр квадрата равен %lf\n", square_perimeter());
	printf("ѕлощадь квадрата равен %lf\n", square_area());
}

double Square::square_perimeter() {
	double perimeter;
	perimeter = 2 * sqrt(2) * diagonal.length;
	return perimeter;
}

double Square::square_area() {
	double area;
	area = pow(diagonal.length, 2) / 2;
	return area;
}