#include <iostream>


void description() {
   std::cout << "This program prints a number as a series of digits\n" << std::endl;
}


unsigned int getInteger() {

   int number = 0;

   while (number < 1 || number > 32767) {
      std::cout << "Enter a number between 1 and 32767 > ";
      std::cin >> number;
   }

   return static_cast<unsigned int>(number);
}


void digitizeInteger(unsigned int n) {

   int div = 10000;

   for (int i = 5; i > 0 ; --i) {
      if (n / div)
         std::cout << static_cast<int>( n / div ) << ' ';
      n %= div;
      div /= 10;
   }
}


int main() {

   description();
   digitizeInteger(getInteger());

   return 0;
}
