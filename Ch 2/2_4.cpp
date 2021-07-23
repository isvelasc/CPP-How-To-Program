#include <iostream>

int main() {
	std::cout << "This program calculates the product of 3 integers\n";
	int x = 0, y = 0, z = 0;

	std::cout << "Enter three integers";
	std::cin >> x >> y >> z;

	std::cout << "The product is " << x * y * z << "\n";
	return 0;
}