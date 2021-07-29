#include <iostream>

int main() {

   int value = 0;
   int decimal = 0;
   int base = 1;

   std::cout << "Enter a binary number: ";
   std::cin >> value;

   while (value != 0) {
      decimal += base * (value % 10);
      base *= 2;
      value /= 10;
   }

   std::cout << "The decimal conversion is " << decimal << "\n";

   return 0;
}
