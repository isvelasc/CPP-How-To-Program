#include <iostream>

int main() {

   int x = 5;
   int y = 7;

   if (y == 8) {
      if (x == 5)
         std::cout << "@@@@@\n";
   }
   else
      std::cout << "#####\n";

   std::cout << "$$$$$\n";
   std::cout << "&&&&&\n";

   return 0;
}
