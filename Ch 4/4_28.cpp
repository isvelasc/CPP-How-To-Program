#include <iostream>

int main() {

   int n = 1;

   while (n <= 8){

      if (n % 2 == 0)
         std::cout << " ";

      int inner = 1;
      while (inner <=8 ){
         std::cout << "* ";
         inner++;
      }

      std::cout << std::endl;
      n++;
   }

   return 0;
}
