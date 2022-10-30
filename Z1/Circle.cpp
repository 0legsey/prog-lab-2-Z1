#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "Circle.h"

Circle::Circle() {
	center.x = center.y = 0;
	circle_point.x = circle_point.y = 0;
	radius = Segment();
}

Circle::~Circle() {

}

Circle::Circle(Point center, Point circle_point) {
	this->center = center;
	this->circle_point = circle_point;
	this->radius = Segment(center, circle_point);
}

void Circle::input() {
	printf("������� ���������� ����� ���������� ����� ������:\n");
	scanf("%lf%lf", &center.x, &center.y);
	printf("������� ���������� ����� �� ���������� ����� ������:\n");
	scanf("%lf%lf", &circle_point.x, &circle_point.y);
	radius = Segment(center, circle_point);
}

void Circle::output() {
	printf("���������� ����� ����������: (%lf, %lf)\n", center.x, center.y);
	printf("���������� ����� �� ����������: (%lf, %lf)\n", circle_point.x, circle_point.y);
	printf("����� ������� ����� %lf\n", radius.length);
	printf("����� ���������� ����� %lf\n", circle_length());
	printf("������� ����� ����� %lf\n", circle_area());
}

double Circle::circle_length() {
	double len;
	len = 2 * M_PI * radius.length;
	return len;
}

double Circle::circle_area() {
	double area;
	area = M_PI * pow(radius.length, 2);
	return area;
}