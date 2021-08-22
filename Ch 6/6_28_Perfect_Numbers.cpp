#include <iostream>
#include <iomanip>


void description() {
   std::cout << "This program determines if for a given number, the sum of its divisors equal itself\n"
      << "Thus creating the 'perfect number'\n" << std::endl;
}


void line() {
   for (int i = 0; i < 26; ++i){
      std::cout << "-";
   }
   std::cout << "\n" << std::endl;
}


void displayPerfectNumber(int* divs, int size, int pn) {
   std::cout << std::setw(4) << pn << " =";
   for (int i = 0; i < size; ++i) {
      if (i + 1 == size)
         std::cout << ' ' << divs[i];
      else
         std::cout << ' ' << divs[i] << " +";
   }
   std::cout << std::endl;
}

void divisors(int candidate) {

   int inner_sum = 0;
   int divs[1000] = {0};
   int size = 0;

   for (int n = 1; n < candidate; ++n){
      if (candidate % n == 0) {
         inner_sum += n;
         divs[size++] = n;
      }
   }

   if (inner_sum == candidate) {
      displayPerfectNumber(divs, size, candidate);
   }
}


void isPerfect() {

   std::cout << "Perfect Numbers (1 - 100,000)\n";
   line();
   for (int n = 1; n <= 100000; ++n) {
      divisors(n);
   }
}


int main() {

   description();
   isPerfect();

   return 0;
}
