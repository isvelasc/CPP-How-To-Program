#include <iostream>
#include <iomanip>


int main() {

   double pi = 4;
   int numerator = 4;
   int denominator = 3;

   for (int i = 1; i <= 999; ++i) {
      if (i % 2 == 1)
         pi -= static_cast<double>( numerator ) / denominator;
      else
         pi += static_cast<double>( numerator ) / denominator;

      denominator += 2;
   }

   std::cout << std::fixed << std::setprecision( 50 );
   std::cout << "Pi: " << pi << std::endl;

   return 0;
}
