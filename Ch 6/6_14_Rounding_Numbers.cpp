#include <iostream>
#include <iomanip>
#include <cmath>

const int roundToInteger(double x) {
   return floor(x + 0.5);
}

const double roundToTenths(double x) {
   return floor(x * 10 + 0.5) / 10;
}

const double roundToHundreths(double x) {
   return floor(x * 100 + 0.5) / 100;
}

const double roundToThousanths(double x) {
   return floor(x * 1000 + 0.5) / 1000;
}

void displayRoundedNumber(double number) {

   std::cout << std::endl;
   std::cout << "Number: " << std::fixed << std::setprecision(4) << number << "\n"
      << "---------------\n"
      << std::setw( 15 ) << "Rounded {"
      << std::setw( 9 ) << "Integer"
      << std::setw( 11 ) << "Tenths"
      << std::setw( 14 ) << "Hundredths"
      << std::setw( 18 ) << "Thousandths  }"
      << std::endl;
   std::cout
      << std::setw( 24 ) << roundToInteger(number)
      << std::fixed << std::setprecision( 1 ) << std::setw( 11 ) << roundToTenths(number)
      << std::fixed << std::setprecision( 2 ) << std::setw( 14 ) << roundToHundreths(number)
      << std::fixed << std::setprecision( 3 ) << std::setw( 15 ) << roundToThousanths(number) << std::endl;
   std::cout << std::endl;

}

void getNumbers(unsigned int loop) {

   double number = 0;
   for (; loop > 0 ; --loop) {
      std::cin >> number;
      displayRoundedNumber(number);
   }
}

unsigned int inputNumber() {

   int input = -1;
   while (input < 0) {
      std::cout << "Enter the desired amount of numbers to round > ";
      std::cin >> input;
   }

   return static_cast<unsigned int>(input);
}


int main() {

   getNumbers(inputNumber());

   return 0;
}

