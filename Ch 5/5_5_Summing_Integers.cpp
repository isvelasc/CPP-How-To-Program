#include <iostream>

int main() {

   int input = 0;
   int num = 0;
   int total = 0;

   std::cin >> input;

   for (int i = 1; i <= input; ++i){

      std::cin >> num;
      if(!std::cin)
         break;
      total += num;
   }

   std::cout << total << std::endl;

   return 0;
}
