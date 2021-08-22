#include <iostream>
#include <iomanip>
#include <cstdlib>


void description() {
   std::cout << "This program is here to help with multiplication tables\n" << std::endl;
}


void correct() {
   std::cout << "Very good!\n" << std::endl;
}


void incorrect() {
   std::cout << "No. Please try again.\n" << std::endl;
}


int getNumber() {
   return 1 + rand() % 12;
}


int multAnswer(int n, int k) {
   int answer;
   std::cout << "How much is " << n << " times " << k << "?\n> ";
   std::cin >> answer;

   return answer;
}


void loop() {
   int n = getNumber();
   int k = getNumber();

   while (true) {
      int answer = multAnswer(n, k);
      if (answer == (n * k)) {
         correct();
         n = getNumber();
         k = getNumber();
      }
      else
         incorrect();
   }
}


int main() {

   srand( static_cast<unsigned int>( time(0) ) );
   description();
   loop();

   return 0;
}
