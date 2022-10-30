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
	printf("������� ���������� ����� A ������������ ����� ������:\n");
	scanf("%lf%lf", &a.x, &a.y);
	printf("������� ���������� ����� B ������������ ����� ������:\n");
	scanf("%lf%lf", &b.x, &b.y);
	printf("������� ���������� ����� C ������������ ����� ������:\n");
	scanf("%lf%lf", &c.x, &c.y);
	ab = Segment(a, b);
	bc = Segment(b, c);
	ca = Segment(c, a);
}

void Triangle::output() {
	printf("���������� ����� A ������������: (%lf, %lf)\n", a.x, a.y);
	printf("���������� ����� B ������������: (%lf, %lf)\n", b.x, b.y);
	printf("���������� ����� C ������������: (%lf, %lf)\n", c.x, c.y);
	printf("����� ������� AB ����� %lf\n", ab.length);
	printf("����� ������� BC ����� %lf\n", bc.length);
	printf("����� ������� CA ����� %lf\n", ca.length);
	printf("�������� ������������ ����� %lf\n", triangle_perimeter());
	printf("������� ������������ ����� %lf\n", triangle_area());
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