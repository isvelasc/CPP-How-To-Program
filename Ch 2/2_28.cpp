#include <iostream>

int main() {

   int x;
   std::cout << "Enter a five digit integer: ";
   std::cin >> x;
   std::cout << x / 10000;
   x %= 10000;
   std::cout << "   " << x / 1000;
   x %= 1000;
   std::cout << "   " << x /100;
   x %= 100;
   std::cout << "   " << x / 10;
   x %= 10;
   std::cout << "   " << x << "\n";
}
