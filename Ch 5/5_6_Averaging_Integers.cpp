#include <iostream>

int main() {

   int num = 0;
   int total = 0;

   for ( ; ; ) {

      std::cin >> num;
      if (!std::cin)
         break;
      if (num == 9999)
         break;
      else
         total += num;
   }

   std::cout << total << std::endl;

   return 0;
}
