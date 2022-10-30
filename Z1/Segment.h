#pragma once
#include <iostream>
#include "Point.h"

struct Segment {
	Segment();
	~Segment();
	Segment(Point a, Point b);
	void input();
	void output();
	double length_calc();
	double length;
	Point a;
	Point b;
};
