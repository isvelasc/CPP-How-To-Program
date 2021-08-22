#include <iostream>
#include <iomanip>


void description() {
   std::cout << "This program prints out a square based on given dimension and character\n" << std::endl;
}


void displaySquare(unsigned int size, char c) {
   std::cout << "\n";
   for (int row = 0; row < size; ++row) {
      for (int col = 0; col < size; ++col) {
         std::cout << c << ' ';
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


char squareCharacter() {
   char c;
   std::cout << "Enter a character for the square > ";
   std::cin >> c;

   return c;
}


int main() {

   description();

   char c = squareCharacter();
   unsigned int s = squareSize();
   displaySquare(s, c);

   return 0;
}
