#include <iostream>

int main() {

   int odd_product = 1;

   for (int i = 3; i <= 15; i += 2)
      odd_product *= i;

   std::cout << odd_product << std::endl;
   return 0;
}
