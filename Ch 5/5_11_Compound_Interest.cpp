#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
   double amount;
   double principal = 1000.0;
   double rate5  = 1.05;
   double rate6  = 1.06;
   double rate7  = 1.07;
   double rate8  = 1.08;
   double rate9  = 1.09;
   double rate10 = 1.10;

   std::cout << "Year" << std::setw( 16 ) << "5% Rate"
                       << std::setw( 16 ) << "6% Rate"
                       << std::setw( 16 ) << "7% Rate"
                       << std::setw( 16 ) << "8% Rate"
                       << std::setw( 16 ) << "9% Rate"
                       << std::setw( 18 ) << "10% Rate\n";
   std::cout << std::fixed << std::setprecision( 2 );

   for (unsigned int year = 1; year <= 10; ++year) {

      amount = principal * pow(rate5, year);
      std::cout << std::setw( 4 ) << year << std::setw( 16 ) << amount;

      amount = principal * pow(rate6, year);
      std::cout << std::setw( 16 ) << amount;

      amount = principal * pow(rate7, year);
      std::cout << std::setw( 16 ) << amount;

      amount = principal * pow(rate8, year);
      std::cout << std::setw( 16 ) << amount;

      amount = principal * pow(rate9, year);
      std::cout << std::setw( 16 ) << amount;

      amount = principal * pow(rate10, year);
      std::cout << std::setw( 16 ) << amount << "\n";
   }

   return 0;
}
