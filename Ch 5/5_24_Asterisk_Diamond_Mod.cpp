#include <iostream>

int main() {

   int diamond_size = 0;

   while (diamond_size % 2 != 1 && diamond_size < 1 || diamond_size > 19) {
      std::cout << "Enter Odd number for diamond size (1-19): ";
      std::cin >> diamond_size;
   }

   int blanks = diamond_size / 2;
   int asterisks = 1;
   int step = 1;
   for (int row = 1; row >= 1; ){

      if (row == (diamond_size / 2 + 1)){
         step = -1;
      }

      for (int b = blanks; b >= 1; --b){
         std::cout << ' ';
      }
      blanks -= step;

      for (int a = asterisks; a >= 1; --a){
         std::cout << "*";
      }
      asterisks += step * 2;

      row += step;

      std::cout << "\n";
   }

   return 0;
}

