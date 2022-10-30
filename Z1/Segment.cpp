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
	printf("������� ���������� ������ ����� ����� ������:\n");
	scanf("%lf%lf", &a.x, &a.y);
	printf("������� ���������� ������ ����� ����� ������:\n");
	scanf("%lf%lf", &b.x, &b.y);
	length = length_calc();
}

void Segment::output() {
	printf("\n���������� ������ �����: (%lf, %lf)\n", a.x, a.y);
	printf("���������� ������ �����: (%lf, %lf)\n", b.x, b.y);
	printf("����� ������� ����� %lf", length);
}

double Segment::length_calc() {
	double len;
	len = pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
	return sqrt(len);
}