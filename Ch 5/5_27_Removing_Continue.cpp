#include <iostream>

int main() {

   for (unsigned int count = 1; count <= 10; ++count){
      if (count == 5)
         ;
      else
         std::cout << count << " ";
   }

   std::cout << "\nUsed structured programming to skip printing 5" << std::endl;

   return 0;
}
