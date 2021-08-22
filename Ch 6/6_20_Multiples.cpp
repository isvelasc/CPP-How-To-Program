#include <iostream>
#include <iomanip>


void description() {
   std::cout << "This program that determines for a pair of integers\n"
      << "whether the SECOND is a multiple of the FIRST\n" << std::endl;
}


void checkMultiple(int a, int b) {
   if (a % b == 0){
      std::cout << b << " is a multiple of " << a << "\n" << std::endl;
   }
   else
      std::cout << b << " is not a multiple of " << a << "\n" << std::endl;
}


void getPair() {
   int a;
   int b;

   while ( std::cin >> a && std::cin >> b ) {
      checkMultiple(a, b);
   }
}


int main() {

   description();
   getPair();

   return 0;
}
