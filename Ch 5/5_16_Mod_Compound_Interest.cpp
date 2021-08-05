#include <iostream>
#include <iomanip>
#include <cmath>


int main() {

   int amount;
   int principal = 1000 * 100;
   double rate = 1.05;

   std::cout << "Year" << std::setw( 21 ) << "Amount on deposit" << std::endl;

   std::cout << std::fixed << std::setprecision( 2 );

   for (unsigned int year = 1; year <= 10; ++year) {
      amount = principal * pow(rate, year);
      int dollars = amount / 100;
      amount %= 100;
      int pennies = amount;
      std::cout << std::setw( 4 ) << year << std::setw( 21 ) << dollars << "." << pennies << std::endl;
   }

   return 0;
}
