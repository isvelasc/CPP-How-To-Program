#include <iostream>

int main() {

   int fact = 1;

   std::cout << "Value\tFactorial\n";

   for (int i = 1; i <=5; i++ ) {
      fact *= i;
      std::cout << i << "!\t" << fact << "\n";
   }

   return 0;
}
