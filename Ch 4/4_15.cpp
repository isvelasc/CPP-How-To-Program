#include <iostream>
#include <iomanip>

int main() {

   unsigned int counter = 1;
   unsigned int contestant = 1;
   double number = 0;
   double largest = 0;


   while (counter <= 10) {
      std::cout << "Total Sales of contestant " << counter << " : $";
      std::cin >> number;

      if (number > largest) {
         largest = number;
         contestant = counter;
      }

      ++counter;
   }

   std::cout << std::setprecision(2) << std::fixed;
   std::cout << "\nContestant " << contestant << " had the most sales at $" << largest << std::endl;

   return 0;
}
