#pragma once
#include <iostream>
#include "Segment.h"
#include "Point.h"

struct Circle {
	Circle();
	~Circle();
	Circle(Point center, Point circle_point);
	void input();
	void output();
	double circle_length();
	double circle_area();
	Segment radius;
	Point center;
	Point circle_point;
};