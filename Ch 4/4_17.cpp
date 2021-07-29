#include <iostream>
#include <climits>

int main() {

   double largest = INT_MIN;
   double second_largest = INT_MIN;
   double number = 0;
   unsigned int counter = 1;

   while (counter <= 10) {
      std::cout << "Enter any number: ";
      std::cin >> number;

      if (number > largest && counter == 1)
         largest = number;
      else if (number > largest) {
         second_largest = largest;
         largest = number;
      }
      else if (number > second_largest)
         second_largest = number;

      counter++;
   }

   std::cout << "\nThe largest number was : " << largest << "\n";
   std::cout << "The second largest was : " << second_largest << "\n";

   return 0;
}
