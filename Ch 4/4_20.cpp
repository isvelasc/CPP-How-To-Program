#include <iostream>

int main() {

   unsigned int passes = 0;
   unsigned int failures = 0;
   unsigned int studentCounter = 1;

   while (studentCounter <= 10) {
      int result = 0;
      while (result != 1 && result != 2){
         std::cout << "Enter result (1 = pass, 2 = fail): ";
         std::cin >> result;
      }

      if (result == 1)
         passes++;
      else
         failures++;

      studentCounter++;
   }

   std::cout << "Passed " << passes << "\nFailed " << failures << std::endl;

   if (passes > 8)
      std::cout << "Bonus to instructor!" << std::endl;

   return 0;
}
