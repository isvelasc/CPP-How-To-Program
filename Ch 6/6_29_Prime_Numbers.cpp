#include <iostream>
#include <iomanip>


void description() {
   std::cout << "\nPrime Numbers (2 - 10,000)\n" << std::endl;
}


void checkPrimeMembership(int candidate) {

   int n = 2;

   for (; n < candidate; ++n) {
      if (candidate % n == 0)
         break;
   }

   if (n == candidate) {
      std::cout << std::setw( 13 ) << candidate << std::endl;
   }
}


void isPrime() {
   for (int n = 2; n <= 10000; ++n) {
      checkPrimeMembership(n);
   }
}


int main() {

   description();
   isPrime();

   return 0;
}
