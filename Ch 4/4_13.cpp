#include <iostream>
#include <iomanip>

int main() {

   int miles = 0;
   unsigned int gallons = 0;
   double totalMPG = 0;

   std::cout << "Enter miles driven (-1 to quit): ";
   std::cin >> miles;

   while (miles != -1) {
      std::cout << "Enter gallons used: ";
      std::cin >> gallons;

      double MPG = static_cast<double>(miles) / gallons;
      std::cout << std::setprecision(6) << std::fixed;
      std::cout << "MPG this trip: " << MPG << std::endl;

      totalMPG += MPG;
      std::cout << "Total MPG: " << totalMPG << std::endl;

      std::cout << "\nEnter miles driven (-1 to quit): ";
      std::cin >> miles;
   }

   return 0;
}
