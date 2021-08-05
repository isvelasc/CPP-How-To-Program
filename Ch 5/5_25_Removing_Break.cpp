#include <iostream>

int main() {

   unsigned int count;
   unsigned int stop;

   for (count = 1; count <= 10; ++count){

      if (count == 5) {
         stop = count;
         count = 11;
      }
      else
         std::cout << count << " ";
   }

   std::cout << "\nBroke out of loop at count = " << stop << std::endl;

   return 0;
}
