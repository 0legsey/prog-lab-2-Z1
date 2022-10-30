#pragma once
#include <iostream>
#include "Point.h"
#include "Segment.h"

struct Triangle {
	Triangle();
	~Triangle();
	Triangle(Point a, Point b, Point c);
	void input();
	void output();
	double triangle_perimeter();
	double triangle_area();
	Segment ab;
	Segment bc;
	Segment ca;
	Point a;
	Point b;
	Point c;
};