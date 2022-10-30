#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include "Triangle.h"

Triangle::Triangle() {
	a.x = a.y = 0;
	b.x = b.y = 0;
	c.x = c.y = 0;
	ab = Segment();
	bc = Segment();
	ca = Segment();
}

Triangle::~Triangle() {
	
}

Triangle::Triangle(Point a, Point b, Point c) {
	this->a = a;
	this->b = b;
	this->c = c;
	ab = Segment(a, b);
	bc = Segment(b, c);
	ca = Segment(c, a);
}

void Triangle::input() {
	printf("Введите координаты точки A треугольника через пробел:\n");
	scanf("%lf%lf", &a.x, &a.y);
	printf("Введите координаты точки B треугольника через пробел:\n");
	scanf("%lf%lf", &b.x, &b.y);
	printf("Введите координаты точки C треугольника через пробел:\n");
	scanf("%lf%lf", &c.x, &c.y);
	ab = Segment(a, b);
	bc = Segment(b, c);
	ca = Segment(c, a);
}

void Triangle::output() {
	printf("Координаты точки A треугольника: (%lf, %lf)\n", a.x, a.y);
	printf("Координаты точки B треугольника: (%lf, %lf)\n", b.x, b.y);
	printf("Координаты точки C треугольника: (%lf, %lf)\n", c.x, c.y);
	printf("Длина отрезка AB равна %lf\n", ab.length);
	printf("Длина отрезка BC равна %lf\n", bc.length);
	printf("Длина отрезка CA равна %lf\n", ca.length);
	printf("Периметр треугольника равен %lf\n", triangle_perimeter());
	printf("Площадь треугольника равна %lf\n", triangle_area());
}

double Triangle::triangle_perimeter() {
	double perimeter;
	perimeter = ab.length + bc.length + ca.length;
	return perimeter;
}

double Triangle::triangle_area() {
	double area;
	double half_perimeter = triangle_perimeter() / 2;
	area = sqrt(half_perimeter * (half_perimeter - ab.length) * (half_perimeter - bc.length) * (half_perimeter - ca.length));
	return area;
}