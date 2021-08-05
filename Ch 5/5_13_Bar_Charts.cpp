#include <iostream>

int main() {

   int bc1 = 0;
   int bc2 = 0;
   int bc3 = 0;
   int bc4 = 0;
   int bc5 = 0;

   std::cin >> bc1;
   std::cin >> bc2;
   std::cin >> bc3;
   std::cin >> bc4;
   std::cin >> bc5;

   for (unsigned int i = 1; i <= bc1; ++i)
      std::cout << "*";
   std::cout << "\n";
   for (unsigned int i = 1; i <= bc2; ++i)
      std::cout << "*";
   std::cout << "\n";
   for (unsigned int i = 1; i <= bc3; ++i)
      std::cout << "*";
   std::cout << "\n";
   for (unsigned int i = 1; i <= bc4; ++i)
      std::cout << "*";
   std::cout << "\n";
   for (unsigned int i = 1; i <= bc5; ++i)
      std::cout << "*";
   std::cout << "\n";

   return 0;
}
