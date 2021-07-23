#include <iostream>

int main() {

   char c;
   std::cout << "Enter any one character on your keyboard: ";
   std::cin >> c;
   std::cout << "This character represented as an integer is " << static_cast<int>(c) << "\n";
}
