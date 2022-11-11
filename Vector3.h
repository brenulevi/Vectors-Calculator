#pragma once
#include <iostream>

class Vector3 {
public:
	float X;
	float Y;
	float Z;

	float Magnitude;

	Vector3(float x, float y, float z);

	static float Dot(Vector3 a, Vector3 b);

	static Vector3 Cross(Vector3 a, Vector3 b);

	static float Distance(Vector3 from, Vector3 to);

	Vector3 operator+(Vector3 const& v);
	
	Vector3 operator-(Vector3 const& v);

	Vector3 operator*(float const k);



	friend std::ostream& operator<<(std::ostream& out, const Vector3& v);
};