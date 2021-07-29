#include <iostream>

int main() {

   int input = 0;
   int crypt1 = 0;
   int crypt2 = 0;
   int crypt3 = 0;
   int crypt4 = 0;

   while (input / 1000 > 10 || input / 1000 < 1) {
      std::cout << "Enter 4 digit integer to be encrypted: ";
      std::cin >> input;
   }

   crypt1 = input / 1000;
   crypt1 += 7;
   crypt1 %= 10;
   input  %= 1000;

   crypt2 = input / 100;
   crypt2 += 7;
   crypt2 %= 10;
   input  %= 100;

   crypt3 = input / 10;
   crypt3 += 7;
   crypt3 %= 10;
   input  %= 10;

   crypt4 = input;
   crypt4 += 7;
   crypt4 %= 10;

   std::cout << "Encrypted digit: " << crypt3 << crypt4 << crypt1 << crypt2 << std::endl;



}
