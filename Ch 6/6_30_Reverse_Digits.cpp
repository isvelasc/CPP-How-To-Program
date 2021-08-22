#include <iostream>


void description() {
   std::cout << "This program takes an integer and returns its digits reversed\n" << std::endl;
}


int getValue() {
   int v;
   std::cout << "Enter integer > ";
   std::cin >> v;

   return v;
}


void reverseInteger(int n) {

   std::cout << "Integer reversed: ";

   if (n == 0) {
      std::cout << n << std::endl;
      return;
   }

   if (n < 0) {
      std::cout << "-";
      n *= -1;
   }

   while (n != 0) {
      std:: cout << n % 10;
      n -= n % 10;
      n /= 10;
   }
   std::cout << std::endl;
}


int main() {

   description();
   reverseInteger(getValue());

   return 0;
}
