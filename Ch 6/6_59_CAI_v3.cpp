#include <iostream>
#include <iomanip>
#include <cstdlib>


void description() {
   std::cout << "This program is here to help with multiplication tables\n" << std::endl;
}


void correct(int response) {
   switch(response){
      case 0:
         std::cout << "Very good!\n" << std::endl;
         break;
      case 1:
         std::cout << "Excellent!\n" << std::endl;
         break;
      case 2:
         std::cout << "Nice work!\n" << std::endl;
         break;
      case 3:
         std::cout << "Keep up the good work!\n" << std::endl;
         break;
      default:
         std::cout << "You da' bomb!\n" << std::endl;
         break;
   }
}


void incorrect(int response) {
   switch(response) {
      case 0:
         std::cout << "No. Please try again.\n" << std::endl;
         break;
      case 1:
         std::cout << "Wrong. Try once more.\n" << std::endl;
         break;
      case 2:
         std::cout << "Don't give up!.\n" << std::endl;
         break;
      case 3:
         std::cout << "No. Keep trying.\n" << std::endl;
         break;
      default:
         std::cout << "These are not the numbers you are looking for.\n" << std::endl;
         break;
   }
}


void monitor(int c, int i) {
   if (c > 7) {
      std::cout << "Congratulations, you are ready to go to the next level!" << std::endl;
   }
   else
      std::cout << "Please ask your teacher for help." << std::endl;
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
   int answered_correct = 0;
   int answered_incorrect = 0;
   int count = 0;

   while (true) {
      int answer = multAnswer(n, k);
      count++;

      if (answer == (n * k)) {
         correct(rand() % 4);
         answered_correct++;

         n = getNumber();
         k = getNumber();
      }
      else {
         incorrect(rand() % 4);
         answered_incorrect++;
      }

      if (count == 10) {
         monitor(answered_correct, answered_incorrect);

         count = 0;
         answered_correct = 0;
         answered_incorrect = 0;

         n = getNumber();
         k = getNumber();

         std::cout << "Let someone else try for a while.\n" << std::endl;
      }
   }
}


int main() {

   srand( static_cast<unsigned int>( time(0) ) );
   description();
   loop();

   return 0;
}
