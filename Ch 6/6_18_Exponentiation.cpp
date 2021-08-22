#include <iostream>
#include <iomanip>


void displayExponentiation(int b, int e, double exp_fn) {
   if (e < 0){
      unsigned int precision = 1;
      std::cout << "Set precision for output > ";
      std::cin >> precision;
      std::cout << b << "^" << e << " = " << std::fixed << std::setprecision( precision ) << exp_fn;
   }
   else
      std::cout << b << "^" << e << " = " << exp_fn;
}


double exponentiation(int b, int e) {

   double exp_fn = 1;

   if (e < 0) {
      for (int i = 0; i > e; --i) {
         exp_fn /= b;
      }
   }

   else {
      for (unsigned int i = 0; i < e; ++i) {
         exp_fn *= b;
      }
   }

   return exp_fn;
}


int inputExponent() {

   int exponent;
   std::cout << "Enter the exponent > ";
   std:: cin >> exponent;

   return exponent;
}


int inputBase() {

   int base;
   std::cout << "Enter the base > ";
   std::cin >> base;

   return base;
}


int main() {

   std::cout << "This is an exponentiation function for integers only\n\n";

   int base = inputBase();
   int exponent = inputExponent();
   double exp_fn = exponentiation(base, exponent);
   displayExponentiation(base, exponent, exp_fn);

   return 0;
}
