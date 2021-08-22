#include <iostream>
#include <iomanip>


void description() {
   std::cout << "This program tests whether a given integer is even\n" << std::endl;
}


bool isEven(int n) {
   return n % 2 == 0;
}


void displayAnswer(bool e) {
   std::cout << std::boolalpha << e << "\n" << std::endl;
}


void getInput() {
   int number;

   while (std::cin >> number) {
      displayAnswer(isEven(number));
   }
}


int main() {

   description();
   getInput();

   return 0;
}
