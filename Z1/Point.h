#pragma once
#include <iostream>

struct Point {
	Point();
	~Point();
	Point(double x, double y);
	void input();
	void output();
	double x;
	double y;
};