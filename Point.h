#pragma once

#include "Vector3.h"

class Point {
public:
	float X;
	float Y;
	float Z;

	Point(float x, float y, float z);

	/*
	Get the result vector of two points
	*/
	static Vector3 GetVector(Point a, Point b);

	/*
	Get the distance between two points
	*/
	static float Distance(Point a, Point b);

	/*
	Get the distance between point and vector
	*/
	static float Distance(Point a, Vector3 b);

	/*
	Operator overloads
	*/
	friend std::ostream& operator<<(std::ostream& out, const Point& p);
};