#include <iostream>

int main() {

   int r;

   std::cout << "Enter the radius of a circle as an integer: ";
   std::cin >> r;
   std::cout << "Diameter is " << r*2 << "\n";
   std::cout << "Circumference is " << 2 * 3.14159 * r << "\n";
   std::cout << "Area is " << 3.14159 * (r * r) << "\n";
}
