#include <iostream>
#include <iomanip>
#include <cstdlib>

void displayRandomNumber(const int shifting_value, const int bounding_value, std::string lower, std::string upper) {
   std::cout << lower << " <= n <= " << upper << std::endl;
   std::cout << shifting_value + rand() % bounding_value << "\n" << std::endl;
}

int main() {

   srand( static_cast<unsigned int>( time(0) ) );
   displayRandomNumber(1, 2, "1", "2");
   displayRandomNumber(1, 101, "1", "100");
   displayRandomNumber(0, 10, "0", "9");
   displayRandomNumber(1000, 113, "1000", "1112");
   displayRandomNumber(-1, 2, "-1", "1");
   displayRandomNumber(-3, 15, "-3", "11");

   return 0;
}
