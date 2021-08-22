#include <iostream>
#include <iomanip>
#include <cstdlib>


void description() {
   std::cout << "I have a number between 1 and 1000.\n"
      << "Can you guess my number?\n"
      << "Please type your first guess.\n"
      << std::endl;
}


void low() {
   std::cout << "Too low. Try again.\n" << std::endl;
}


void high() {
   std::cout << "Too high. Try again.\n" << std::endl;
}


void success() {
   std::cout << "\nExcellent! You guessed the number!" << std::endl;
}


char tryAgain() {

   char c = 'a';
   while (c != 'Y' && c != 'y' && c != 'N' && c != 'n') {
      std::cout << "Would you like to play again (y or n)? ";
      std::cin >> c;
   }

   std::cout << std::endl;

   return c;
}


int randomNumber() {
   return 1 + rand() % 1000;
}


int takeGuess() {
   int guess;
   std::cout << "> ";
   std::cin >> guess;

   return guess;
}


void loop() {

   int number = randomNumber();

   while (true) {
      int guess = takeGuess();
      if (guess < number)
         low();
      else if (guess > number)
         high();
      else {
         success();
         char again = tryAgain();

         if (again == 'N' || again == 'n')
            break;
         else {
            description();
            number = randomNumber();
         }
      }
   }
}


int main() {

   description();
   srand( static_cast<unsigned int>( time(0) ) );
   loop();

   return 0;
}
