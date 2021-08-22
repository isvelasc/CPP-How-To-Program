#include <iostream>
#include <iomanip>
#include <cstdlib>


void description() {
   std::cout << "This program simulates coin tossing\n" << std::endl;
}


int flip() {
   return (rand() % 2);
}


void displayFlip(std::string result) {
   std::cout << std::setw(15) << result << std::endl;
}


void tossCoins() {

   int heads = 0;
   int tails = 0;

   for (int f = 0; f < 100; ++f) {
      if (flip()) {
         heads++;
         displayFlip("Heads");
      }
      else {
         tails++;
         displayFlip("Tails");
      }
   }

   std::cout << "\n" << std::setw(10) << "Heads: " << heads << std::setw(10) << "Tails: " << tails << std::endl;
}


int main() {

   description();
   srand( static_cast<unsigned int>( time(0) ));
   tossCoins();

   return 0;
}
