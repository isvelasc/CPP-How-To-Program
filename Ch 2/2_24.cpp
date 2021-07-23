#include <iostream>

int main() {

   int x;
   std::cout << "Enter an integer: ";
   std::cin >> x;

   if (x%2 == 0)
      std::cout << x << " is even\n";
   else
      std::cout << x << " is odd\n";
}
