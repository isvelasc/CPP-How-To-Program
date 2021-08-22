#include <iostream>
#include <iomanip>
#include <cmath>

void displayRoundedNumber(double number) {

   std::cout << "Given number: " << number << std::endl;
   std::cout << "Rounded number: " << floor(number + 0.5) << std::endl;

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
