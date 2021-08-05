#include <iostream>
#include <iomanip>

int main() {

   for (unsigned int i = 1; i <= 10; ++i){

      for (unsigned int j = 1; j <= i; ++j)
         std::cout << "*";

      std::cout << std::setw( 16 - i );
      for (unsigned int j = 11 - i; j >= 1; --j)
         std::cout << "*";

      std::cout << std::setw( 4 + 2 * i );
      for (unsigned int j = 11 - i; j >= 1; --j)
         std::cout << "*";

      std::cout << std::setw( 16 - i );
      for (unsigned int j = 1; j <= i; ++j)
         std::cout << "*";

      std::cout << "\n";
   }


   return 0;
}
