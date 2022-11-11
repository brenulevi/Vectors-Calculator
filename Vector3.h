#pragma once
#include <iostream>

class Vector3 {
public:
	float X;
	float Y;
	float Z;

	float Magnitude;

	Vector3(float x, float y, float z);

	/*
	Calculate the dot product of vectors
	*/
	static float Dot(Vector3 a, Vector3 b);

	/*
	Calculate the cross product of vectors
	*/
	static Vector3 Cross(Vector3 a, Vector3 b);

	/*
	Calculate the distance between two vectors
	*/
	static float Distance(Vector3 from, Vector3 to);

	/*
	Calculate the angle between vectors in radians
	*/
	static float Angle(Vector3 from, Vector3 to);

	/*
	Return the projection of the vector in another one
	*/
	static Vector3 Project(Vector3 from, Vector3 to);

	Vector3 operator+(Vector3 const& v);
	
	Vector3 operator-(Vector3 const& v);

	Vector3 operator*(float const k);

	bool operator==(Vector3 const& v);

	bool operator!=(Vector3 const& v);

	friend std::ostream& operator<<(std::ostream& out, const Vector3& v);
};