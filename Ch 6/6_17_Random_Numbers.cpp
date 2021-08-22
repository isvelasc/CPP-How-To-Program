#include <iostream>
#include <iomanip>
#include <cstdlib>

void displayRandomNumberFromSet(unsigned int lower_bound, unsigned int upper_bound, unsigned int jump, unsigned int index) {

   unsigned int count = 0;
   unsigned int number;

   std::cout << "[";
   for (; lower_bound <= upper_bound; lower_bound += jump) {
      if (count == index)
         number = lower_bound;

      if (lower_bound == upper_bound)
         std::cout << " " << lower_bound;
      else
         std::cout << " " << lower_bound << ",";

      count++;
   }

   std::cout << " ]" << std::endl;
   std::cout << number << "\n" << std::endl;

}

int main() {

   srand( static_cast<unsigned int>( time(0) ) );
   displayRandomNumberFromSet(2, 10, 2, rand() % 5);
   displayRandomNumberFromSet(3, 11, 2, rand() % 5);
   displayRandomNumberFromSet(6, 22, 4, rand() % 5);

   return 0;
}
