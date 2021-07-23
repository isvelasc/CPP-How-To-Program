#include <iostream>

int main() {

   int a, b;

   std::cout << "Enter two integers: ";
   std::cin >> a >> b;

   if (a > b)
      std::cout << a << " is larger\n";
   else if (b > a)
      std::cout << b << " is larger\n";
   else if (a == b)
      std::cout << "These numbers are equal\n";
}
