#include <iostream>

int main() {

   int x, y;
   std::cout << "Enter two integers: ";
   std::cin >> x >> y;

   if (x%y == 0)
      std::cout << x << " is a multiple of " << y << "\n";
   else
      std::cout << x << " is NOT a multiple of " << y << "\n";
}
