#include <iostream>
#include "Vector3.h"
#include "Matha.h"

int main() {
	Vector3 u = Vector3(-3, 2, 0);
	Vector3 v = Vector3(0, -1, -2);
	
	Vector3 w = u + v*2;
	Vector3 x = v - u;

	std::cout << Vector3::Cross(w, x) << std::endl;
	
	return 0;
}