#include <iostream>
#include <climits>

int main() {

   int input = 0;
   int num = 0;
   int min_int = INT_MAX;

   std::cin >> input;

   for (int i = 1; i <= input; i++) {

      std::cin >> num;
      if (!std::cin)
         break;

      if (num < min_int)
         min_int = num;
   }

   std::cout << min_int << std::endl;
   return 0;
}
