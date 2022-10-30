#pragma once
#include <iostream>
#include "Point.h"
#include "Segment.h"

struct Square {
	Square();
	~Square();
	Square(Point b, Point d);
	void input();
	void output();
	double square_perimeter();
	double square_area();
	Segment diagonal;
	Point b;
	Point d;
};