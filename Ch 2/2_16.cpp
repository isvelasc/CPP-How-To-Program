#include <iostream>

int main() {

   float x, y;

   std::cout << "Enter two numbers: ";
   std::cin >> x >> y;

   std::cout << "Sum:        " << x+y << "\n";
   std::cout << "Product:    " << x*y << "\n";
   std::cout << "Difference: " << x-y << "\n";
   std::cout << "Quotient:   " << x/y << "\n";
}
