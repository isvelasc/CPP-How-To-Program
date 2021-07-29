#include <iostream>

int main() {

   double radius = -1;

   while (radius < 0) {
      std::cout << "Enter the radius of the circle (>= 0): ";
      std::cin >> radius;
   }

   std::cout << "\nDiameter       " << radius * 2;
   std::cout << "\nCircumference  " << radius * 2 * 3.14159;
   std::cout << "\nArea           " << radius * radius * 3.14159 << std::endl;

}
