#include <iostream>

int main() {

   int input = 0;
   int decrypt1 = 0;
   int decrypt2 = 0;
   int decrypt3 = 0;
   int decrypt4 = 0;

   while (input / 1000 > 10 || input / 1000 < 1) {
      std::cout << "Enter 4 digit integer to be decrypted: ";
      std::cin >> input;
   }

   decrypt1 = input / 1000;
   decrypt1 += 10;
   decrypt1 -= 7;
   input  %= 1000;

   decrypt2 = input / 100;
   decrypt2 += 10;
   decrypt2 -= 7;
   input  %= 100;

   decrypt3 = input / 10;
   decrypt3 += 10;
   decrypt3 -= 7;
   input  %= 10;

   decrypt4 = input;
   decrypt4 += 10;
   decrypt4 -= 7;

   std::cout << "Decrypted digit: " << decrypt3 << decrypt4 << decrypt1 << decrypt2 << std::endl;
}
