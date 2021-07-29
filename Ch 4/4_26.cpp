#include <iostream>

int main() {

   int palindrome = 0;
   int first  = 0;
   int second = 0;
   int third  = 0;
   int fourth = 0;
   int fifth  = 0;

   while (palindrome / 10000 > 10 || palindrome / 10000 < 1) {
      std::cout << "Enter a five digit integer: ";
      std::cin >> palindrome;
   }

   first = palindrome / 10000;
   palindrome %= 10000;

   second = palindrome / 1000;
   palindrome %= 1000;

   third = palindrome / 100;
   palindrome %= 100;

   fourth = palindrome / 10;
   palindrome %= 10;

   fifth = palindrome;

   if (first == fifth && second == fourth)
      std::cout << "\n" << first << second << third << fourth << fifth << " is a palindrome\n";

   return 0;
}
