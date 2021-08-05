#include <iostream>
#include <iomanip>

int main() {

   std::cout << "Side A" << std::setw( 9 ) << "Side B" << std::setw( 9 ) << "Side C" << std::endl;

   for (int side1 = 1; side1 <= 500; ++side1) {
      for (int side2 = 1; side2 <= 500; ++side2) {
         for (int side3 = 1; side3 <= 500; ++side3){
            if ((side1*side1 + side2*side2) == side3*side3)
               std::cout << std::setw( 6 ) << side1 << std::setw( 9 ) << side2 << std::setw( 9 ) << side3 << std::endl;
         }
      }
   }

   return 0;
}
