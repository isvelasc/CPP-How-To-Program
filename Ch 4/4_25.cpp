#include <iostream>

int main() {

   int sizeOfSquare = 0;

   while (sizeOfSquare < 1 || sizeOfSquare > 20) {
      std::cout << "Enter size of square (1-20): ";
      std::cin >> sizeOfSquare;
   }

   if (sizeOfSquare == 1) {
      std::cout << "*\n";
   }
   else if (sizeOfSquare == 2) {
      std::cout << "**\n**\n";
   }
   else{
      int counter = 1;
      while (counter <= sizeOfSquare) {
         std::cout << "*";
         counter++;
      }

      counter = 1;
      while (counter < sizeOfSquare - 1) {
         int inner = 1;

         std::cout << "\n*";
         while (inner < sizeOfSquare - 1) {
            std::cout << " ";
            inner++;
         }

         std::cout << "*";
         counter++;
      }

      std::cout << "\n";
      counter = 1;
      while (counter <= sizeOfSquare) {
         std::cout << "*";
         counter++;
      }
   }


   return 0;
}
