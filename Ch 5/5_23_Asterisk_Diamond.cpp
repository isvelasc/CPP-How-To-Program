#include <iostream>

int main() {

   int blanks = 4;
   int asterisks = 1;
   int step = 1;
   for (int row = 1; row >= 1; ){

      if (row == 5){
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
