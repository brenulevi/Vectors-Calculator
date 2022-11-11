#include "Vector3.h"
#include "Matha.h"

#define Sqrt Matha::Sqrt
#define Sqrd Matha::Sqrd

Vector3::Vector3(float _x, float _y, float _z) {
	X = _x;
	Y = _y;
	Z = _z;

	Magnitude = Sqrt(Sqrd(X) + Sqrd(Y) + Sqrd(Z));
}

float Vector3::Dot(Vector3 a, Vector3 b) {
	return (a.X * b.X) + (a.Y * b.Y) + (a.Z * b.Z);
}

Vector3 Vector3::Cross(Vector3 a, Vector3 b) {
	return Vector3(a.Y * b.Z - b.Y * a.Z, a.Z * b.X - a.X * b.Z, a.X * b.Y - a.Y * b.X);
}

float Vector3::Distance(Vector3 from, Vector3 to) {
	return Sqrt(Sqrd(to.X - from.X) + Sqrd(to.Y - from.Y) + Sqrd(to.Z - from.Z));
}

float Vector3::Angle(Vector3 from, Vector3 to) {
	return Matha::Acos(Vector3::Dot(from, to) / (from.Magnitude * to.Magnitude));
}

Vector3 Vector3::Project(Vector3 to, Vector3 from) {
	return to * (Vector3::Dot(from, to) / Sqrd(to.Magnitude));
}

Vector3 Vector3::operator+(Vector3 const& v)
{
	Vector3 res(0, 0, 0);
	res.X = X + v.X;
	res.Y = Y + v.Y;
	res.Z = Z + v.Z;
	return res;
}

Vector3 Vector3::operator-(Vector3 const& v)
{
	Vector3 res(0, 0, 0);
	res.X = X - v.X;
	res.Y = Y - v.Y;
	res.Z = Z - v.Z;
	return res;
}

Vector3 Vector3::operator*(float const k) {
	Vector3 res(0, 0, 0);
	res.X = X * k;
	res.Y = Y * k;
	res.Z = Z * k;
	return res;
}

std::ostream& operator<<(std::ostream& out, const Vector3& v) {
	return out << "(" << v.X << ", " << v.Y << ", " << v.Z << ")";
}