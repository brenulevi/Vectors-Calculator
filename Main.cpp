#include <iostream>
#include "Vector3.h"
#include "Matha.h"

int main() {
	Vector3 u = Vector3(-3, 2, 0);
	Vector3 v = Vector3(0, -1, -2);

	std::cout << (u == v) << std::endl;
	std::cout << (u != v) << std::endl;
	
	return 0;
}