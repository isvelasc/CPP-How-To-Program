#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>


void description() {
   std::cout << "This program is here to help with multiplication\n" << std::endl;
}


int chooseDifficulty() {
   int ret = 0;
   int difficulty = 0;

   while (!ret && (difficulty < 1 || difficulty > 5)) {
      std::cout << "Choose difficulty (1 - 5)\n> ";
      ret = scanf(" %d", &difficulty);
      fflush(stdin);
   }

   std::cout << std::endl;
   return difficulty;
}


int getUpperBound(int d) {
   switch(d) {
      case 1:
         return 9;
      case 2:
         return 99;
      case 3:
         return 999;
      case 4:
         return 9999;
      case 5:
         return 99999;
   }
}


int chooseStudyType(){
   int ret = 0;
   int type = 0;

   while (!ret && (type < 1 || type > 5)) {
      std::cout << "Choose arithmetic problem\n"
         << "1 - Addition\n"
         << "2 - Subtraction\n"
         << "3 - Multiplication\n"
         << "4 - Division\n"
         << "5 - Mixture\n"
         << "> ";
         ret = scanf(" %d", &type);
         fflush(stdin);
   }

   std::cout << std::endl;
   return type;
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


int getNumber(int bound) {
   return 1 + rand() % bound;
}


int checkForMix(int type) {
   if (type != 5)
      return type;
   else
      return 1 + rand() % 4;
}


double givenAnswer(int n, int k, int problem) {
   int ret = 0;
   double answer;

   while (!ret) {
      switch(problem){
         case 1:
            std::cout << "How much is " << n << " + " << k << "?\n> ";
            ret = scanf(" %lf", &answer);
            break;
         case 2:
            std::cout << "How much is " << n << " - " << k << "?\n> ";
            ret = scanf(" %lf", &answer);
            break;
         case 3:
            std::cout << "How much is " << n << " x " << k << "?\n> ";
            ret = scanf(" %lf", &answer);
            break;
         case 4:
            std::cout << "How much is " << n << " / " << k << "?\n"
               << "Answer to the nearest hundredth\n"
               << "> ";
            ret = scanf(" %lf", &answer);
            break;
      }

      fflush(stdin);
   }

   return answer;
}


double getAnswer(int n, int k, int problem)
{
   switch(problem){
      case 1:
         return n + static_cast<double>(k);
      case 2:
         return n - static_cast<double>(k);
      case 3:
         return n * static_cast<double>(k);
      case 4:
         return n / static_cast<double>(k);
   }
}


void loop() {

   double epsilon = 0.1;

   int type = chooseStudyType();
   int bound = getUpperBound(chooseDifficulty());

   int n = getNumber(bound);
   int k = getNumber(bound);
   int answered_correct = 0;
   int answered_incorrect = 0;
   int count = 0;

   while (true) {
      int choice = checkForMix(type);
      double answer = givenAnswer(n, k, choice);
      count++;

      if (fabs(answer - getAnswer(n, k, choice)) <= epsilon * fabs(answer) ) {
         correct(rand() % 4);
         answered_correct++;

         n = getNumber(bound);
         k = getNumber(bound);
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

         std::cout << "Let someone else try for a while.\n" << std::endl;

         srand( static_cast<unsigned int>( time(0) ) );
         type = chooseStudyType();
         bound = getUpperBound(chooseDifficulty());
         n = getNumber(bound);
         k = getNumber(bound);
      }
   }
}


int main() {

   srand( static_cast<unsigned int>( time(0) ) );
   description();
   loop();

   return 0;
}
