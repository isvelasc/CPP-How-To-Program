#include <iostream>


void description() {
   std::cout << "This program calculates seconds since '12-o'clock'\n" << std::endl;
}


unsigned int getInput(int bound, int mod, std::string type) {

   int x = -1;
   std::cout << "Enter the number of " << type << " (0 - " << bound << ")\n"
      << "Overflow will be handled\n" << std::endl;
   while (x < 0) {
      std::cout << "> ";
      std::cin >> x;
   }

   std::cout << "\n";
   return static_cast<unsigned int>( x % mod );
}


unsigned int numberOfSecondsSince12(unsigned int h, unsigned int m, unsigned int s) {
   return h * 60 * 60 + m * 60 + s;
}


void displaySecondsSince12(unsigned int s) {
   std::cout << "Seconds since clock struck 12 is " << s << std::endl;
}

int main() {

   description();

   unsigned int s = getInput(59, 60, "seconds");
   unsigned int m = getInput(59, 60, "minutes");
   unsigned int h = getInput(11, 12, "hours");

   displaySecondsSince12(numberOfSecondsSince12(h, m, s));

   return 0;
}
