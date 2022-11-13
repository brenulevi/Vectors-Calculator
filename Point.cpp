#include "Point.h"
#include "Vector3.h"
#include "Matha.h"

#define Sqrt Matha::Sqrt
#define Sqrd Matha::Sqrd

Point::Point(float x, float y, float z) {
	X = x;
	Y = y;
	Z = z;
}

Vector3 Point::GetVector(Point a, Point b) { 
	return Vector3(b.X - a.X, b.Y - a.Y, b.Z - a.Z); 
}

float Point::Distance(Point a, Point b) {
	return Sqrt(Sqrd(a.X - b.X) + Sqrd(a.Y - b.Y) + Sqrd(a.Z - b.Z));
}

float Point::Distance(Point a, Vector3 b) {
	return Sqrt(Sqrd(a.X - b.X) + Sqrd(a.Y - b.Y) + Sqrd(a.Z - b.Z));
}

std::ostream& operator<<(std::ostream& out, const Point& p) {
	return out << "(" << p.X << ", " << p.Y << ", " << p.Z << ")";
}