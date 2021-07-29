#include <iostream>

int main() {

   long long population2021 = 7882495351;
   double popGrowth = 0.0105;
   long long popTotal = population2021;
   int year = 2021;
   int doubled = 0;

   std::cout << "Year\t|\tPopulation End Of Year\t|\tPopulation Increase\n";
   std::cout << "--------------------------------------------------------------------\n";

   while (year <= 2096) {
      long long increase = popTotal;
      popTotal += popTotal*popGrowth;
      increase = popTotal - increase;
      if (population2021*2 <= popTotal && !doubled) {
         std::cout << year << "\t|\t" << popTotal << "\t\t|\t" << increase << "\t<--- Population doubled since 2021" << std::endl;
         doubled = 1;
      }
      else
         std::cout << year << "\t|\t" << popTotal << "\t\t|\t" << increase << std::endl;

      std::cout << "--------------------------------------------------------------------\n";
      year++;
   }

   return 0;
}
