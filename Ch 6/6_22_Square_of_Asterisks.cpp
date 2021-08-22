#include <iostream>
#include <iomanip>


void description() {
   std::cout << "This program prints out an asterisk square based on given dimensions\n" << std::endl;
}


void displaySquare(unsigned int size) {
   std::cout << "\n";
   for (int row = 0; row < size; ++row) {
      for (int col = 0; col < size; ++col) {
         std::cout << "* ";
      }
      std::cout << std::endl;
   }
}


unsigned int squareSize() {
   int s = 0;
   while (s <= 0) {
      std::cout << "Enter a positive integer > ";
      std::cin >> s;
   }

   return static_cast<unsigned int>(s);
}


int main() {

   description();
   displaySquare(squareSize());

   return 0;
}
